package wotw.web.main

import react.RBuilder
import react.RComponent
import react.RProps
import react.RState
import react.dom.a
import react.router.dom.browserRouter
import react.router.dom.route
import react.router.dom.switch
import wotw.io.messages.protobuf.BingoBoard
import wotw.web.bingo.BingoCardComponent
import wotw.web.bingo.BingoView
import wotw.web.bingo.GameIdProps

class RootComponent: RComponent<RProps, RState>(){
    override fun RBuilder.render() {
        browserRouter {
            switch {
                route<GameIdProps>("/bingo/:gameId"){ props ->
                    child(BingoView::class){
                        attrs.gameId = props.match.params.gameId
                    }
                }
            }
        }
    }
}