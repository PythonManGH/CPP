import QtQuick 2.12
import QtQuick.Controls 2.5

ApplicationWindow {
    id:mainWin
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    function doubleClicked(){
        console.log("我是自定义函数" + (age == 100))
    }

    property int age: 100

    Button{
        id:button1
        x:200 // button 的位置
        y:200 // button 的位置
        iconSource:"qrc:/../resource/list.png"
        onClicked: {
            // 这个是槽函数，信号是clicked()
            // 固定写法 on+信号(首字母大写)
            console.log("我是button的槽函数")
        }

        onDoubleClicked: mainWin.doubleClicked()
    }
}
