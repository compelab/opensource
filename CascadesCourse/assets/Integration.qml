import bb.cascades 1.2

Page {
    titleBar: TitleBar {
        title: "IntegrationQml"
    }
    Container {
        Button {
            text: "C++"
            onClicked: {
                _app.piscarLed(5)
            }
        }
        
    }
}
