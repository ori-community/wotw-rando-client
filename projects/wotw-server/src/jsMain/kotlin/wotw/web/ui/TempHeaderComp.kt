package wotw.web.ui

import io.ktor.client.request.*
import io.ktor.http.*
import kotlinx.browser.document
import kotlinx.browser.window
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch
import kotlinx.css.TextAlign
import kotlinx.css.textAlign
import kotlinx.html.js.onClickFunction
import react.*
import react.dom.button
import react.dom.p
import styled.css
import styled.styledDiv
import wotw.io.messages.BingoGenProperties
import wotw.io.messages.protobuf.UserInfo
import wotw.web.main.Application

external interface UserInfoState : RState {
    var userInfo: UserInfo?
}

class TempHeaderComp: RComponent<RProps, UserInfoState>(){
    override fun componentDidMount() {
        GlobalScope.launch {
            val maybeInfo = Application.user.await()
            setState{ userInfo = maybeInfo }
        }
    }

    override fun RBuilder.render() {
        styledDiv {
            css {
                textAlign = TextAlign.center

            }
            val name = state.userInfo?.name
            if (!name.isNullOrEmpty()){
                +"Welcome, $name "
                p {
                    button {
                        +"New Bingo Game"
                        attrs {
                            onClickFunction = {
                                GlobalScope.launch {
                                    document.location?.href = "/bingo/${Application.api.post<String>(path = "/bingo")}"
                                }
                            }
                        }
                    }
                    button {
                        +"New Discovery Bingo Game"
                        attrs {
                            onClickFunction = {
                                GlobalScope.launch {
                                    document.location?.href = "/bingo/${Application.api.post<String>(path = "/bingo", body = BingoGenProperties(discovery = 2)){
                                        contentType(ContentType.Application.Json)
                                    }
                                    }"
                                }
                            }
                        }
                    }
                    button {
                        +"New LOCKOUT Bingo Game"
                        attrs {
                            onClickFunction = {
                                GlobalScope.launch {
                                    document.location?.href = "/bingo/${Application.api.post<String>(path = "/bingo", body = BingoGenProperties(lockout = true)){
                                        contentType(ContentType.Application.Json)
                                    }
                                    }"
                                }
                            }
                        }
                    }
                    button {
                        +"New Coop Game"
                        attrs {
                            onClickFunction = {
                                GlobalScope.launch {
                                    document.location?.href = "/game/${Application.api.post<String>(path = "/games")}"
                                }
                            }
                        }
                    }
                    button {
                        attrs.onClickFunction = {
                            document.location?.href = "/api/logout?redir=${window.location.pathname}"
                        }
                        +"logout"
                    }
                }
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