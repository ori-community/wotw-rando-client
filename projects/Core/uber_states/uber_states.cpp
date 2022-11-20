#include <Core/uber_states/uber_states.h>
#include <Core/api/game/game.h>

#include <Modloader/app/methods/Moon/UberStateController.h>
#include <Modloader/app/methods/Moon/UberStateValueStore.h>
#include <Modloader/app/methods/SaveGameController.h>

using namespace app::classes;

namespace uber_states {
    app::Byte__Array* create_snapshot(bool notify_presave_observers) {
        auto value_store = Moon::UberStateController::get_CurrentStateValueStore();

        if (notify_presave_observers) {
            Moon::UberStateController::NotifyPresaveObservers(value_store);
        }

        return Moon::UberStateValueStore::ToByteArrayWithClone(value_store);
    }

    void load_snapshot(app::Byte__Array* data) {
        auto controller = game::save_controller();

        SaveGameController::LoadUberState_2(controller, data);
        SaveGameController::RestoreCheckpoint(controller);
    }
}