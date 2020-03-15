import QtQuick 2.12
import QtQuick.Controls 2.5
import "Login" // 注意，如果是同级目录，则不用引入，可以直接用

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Tabs")

//    // 这个定义一个函数
//    function dblClicked(){
//        console.log("This is dblClicked")
//    }

//    property int age: 100

//    Button{
//        id:button1
//        x:200
//        y:200
//        onClicked: {
//            console.log("This is onClicked" + (age == 100))
//        }
//        onDoubleClicked: dblClicked();
//    }

//    Button{
//        id:button2
//        anchors.centerIn: parent   // 这句的意思是 相对副窗口剧中(会一直剧中)
//        //anchors.centerIn: parent
//        text: qsTr("Test")
//        icon.source: "qrc:/../resource/list.png"
//    }

//    Item{
//        id:button3Area
//        anchors.fill: parent
//        x:100
//        y:100
//        width:100
//        height:100
//    }
//    Button{
//        id:button3
//        anchors.verticalCenter: button3Area.verticalCenter
//        text: qsTr("Button3")
//    }

//    LoginPage{
//        name:"liujun"
//    }


    // 控件和控件之间的对其
    Button{
        id:button1
        anchors.centerIn: parent
        x:200
        y:200
        text:"button1"
    }

    Button{
        id:button2
        anchors.top: button1.bottom
        anchors.left: button1.left
        text:"button2"
    }

    Button{
        id:button3
        anchors.top: button2.bottom
        anchors.left: button2.left
        anchors.topMargin: 10
        text:"button3"
    }
}
