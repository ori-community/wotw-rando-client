package wotw.web.main

import kotlinx.browser.window
import react.RBuilder
import react.RComponent
import react.RProps
import react.RState
import react.dom.a
import react.dom.div
import react.dom.li
import react.dom.ol
import react.router.dom.browserRouter
import react.router.dom.route
import react.router.dom.switch
import styled.styledP
import wotw.web.ui.TempHeaderComp
import wotw.web.ui.bingo.BingoView
import wotw.web.ui.bingo.GameIdProps

class RootComponent : RComponent<RProps, RState>() {
    override fun RBuilder.render() {
        browserRouter {
            switch {
                route<GameIdProps>("/bingo/:gameId") { props ->
                    child(BingoView::class) {
                        attrs.gameId = props.match.params.gameId
                    }
                }
                route( "/game/:gameId") {
                    div {
                        child(TempHeaderComp::class) {}


                    }
                }
                route("/") {
                    div {
                        child(TempHeaderComp::class) {}
                        styledP {
                            +"Welcome to the wotw ori rando home page! This site is currently under construction."
                        }
                        styledP {
                            +"Quick bingo guide:"
                            ol {
                                li {
                                    div {
                                        a { attrs.href = "/api/login?redir=${window.location.pathname}"
                                            + "Login"
                                        }
                                        +" (Uses discord)"
                                    }
                                }
                                li { +"Click the \"New Bingo Game\" button" }
                                li { +"On the Bingo page, click the \"Join Game\" button" }
                                li { +"Launch the Randomizer, " }
                            }
                        }

                        a {
                            attrs.href = "https://discord.gg/Ahwh4Na"
                            +"Join the dev discord for more info"
                        }
                    }
                }
            }
        }
    }
}