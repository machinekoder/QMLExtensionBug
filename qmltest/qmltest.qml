import QtQuick 2.2
import QtQuick.Controls 1.1
import QtQuick.Window 2.0
import com.mycompany.qmlcomponents 1.0 as Test

ApplicationWindow {
    title: qsTr("Hello World")
    width: 640
    height: 480

    menuBar: MenuBar {
        Menu {
            title: qsTr("File")
            MenuItem {
                text: qsTr("Exit")
                onTriggered: Qt.quit();
            }
        }
    }

    Button {
        text: qsTr("Hello World")
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
    }

    Test.MyItem {
        x: 0
        y: 0
        width: 200
        height: 200
    }

    Test.TestItem {
        anchors.fill: parent
    }
}
