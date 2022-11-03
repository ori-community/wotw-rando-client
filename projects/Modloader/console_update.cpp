#include "interception_macros.h"
#include "app/methods/GameController.h"
#include "windows_api/console.h"

IL2CPP_INTERCEPT(GameController, void, Update, (app::GameController * this_ptr)) {
    modloader::win::console::console_update();
    next::GameController::Update(this_ptr);
}
