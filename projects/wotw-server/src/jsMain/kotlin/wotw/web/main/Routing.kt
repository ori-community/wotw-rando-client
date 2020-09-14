package wotw.web.main

import react.RBuilder
import react.RComponent
import react.RProps
import react.RState
import react.router.dom.browserRouter
import react.router.dom.route
import react.router.dom.switch
import wotw.web.ui.bingo.BingoView
import wotw.web.ui.bingo.GameIdProps

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