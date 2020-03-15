import QtQuick 2.12
import QtQuick.Controls 2.5

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Tabs")

    Label{
        width: 200
        height: 40
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        text:"123456"
        font.bold: true
        font.pixelSize: 18
        background: Rectangle{
            color:"#ff0000"
        }
    }

    TextField{
        y:300
        width: 200
        height: 40
        id:textField
        onTextChanged: {
            //console.log(text)
        }
        onTextEdited: {
            //console.log(text)
        }
        onAccepted: {
            console.log(text)
        }
    }
}
