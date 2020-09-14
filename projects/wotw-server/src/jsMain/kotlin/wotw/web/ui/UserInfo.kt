package wotw.web.ui

import kotlinx.browser.document
import kotlinx.browser.window
import kotlinx.html.js.onClickFunction
import react.RBuilder
import react.RComponent
import react.RProps
import react.RState
import react.dom.button
import react.dom.div

external interface UserInfoProps: RProps{
    var name: String?
}

class UserInfoComponent: RComponent<UserInfoProps, RState>(){
    override fun RBuilder.render() {
        div {
            val name = props.name
            if (name != null){
                +name
            }else{
                button {
                    attrs.onClickFunction = {
                        document.location?.href = "/api/login?redir=${window.location.pathname}"
                    }
                    +"login"
                }
            }
        }
    }
}