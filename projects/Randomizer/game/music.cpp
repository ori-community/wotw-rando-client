#include <Core/dev/object_visualizer.h>
#include <Modloader/app/methods/AkSoundEngine.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/app/methods/WotwUberStateWwiseStateManager.h>
#include <Modloader/app/types/State.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/console.h>
#include <format>
#include <fstream>

using namespace app::classes;

namespace {
    unsigned int get_state(unsigned int group) {
        uint32_t out;
        AkSoundEngine::GetState_1(group, &out);
        return out;
    }

    float next_update = 0.3f;
    IL2CPP_INTERCEPT(GameController, void, FixedUpdate, (app::GameController* this_ptr)) {
        next_update -= TimeUtility::get_fixedDeltaTime();

        if (next_update < 0.f) {
            next_update = 0.3f;
            modloader::win::console::console_send("---");

            modloader::win::console::console_send(std::format("swampHowlsDenMusic  = {}", get_state(2313411230)));
            modloader::win::console::console_send(std::format("swampNightcrawlerC  = {}", get_state(2613557261)));
            modloader::win::console::console_send(std::format("nightCrawlerDefeat  = {}", get_state(1568262700)));
            modloader::win::console::console_send(std::format("risingPedistals_ub  = {}", get_state(1461097943)));
            modloader::win::console::console_send(std::format("playerHasSword_uber = {}", get_state(1817474664)));
            modloader::win::console::console_send(std::format("sceneStateGroup     = {}", get_state(3828193963)));

        }

        next::GameController::FixedUpdate(this_ptr);
    }

    IL2CPP_INTERCEPT(WotwUberStateWwiseStateManager, void, PopulateAffectedStates, (app::WotwUberStateWwiseStateManager * this_ptr )) {
        // Modify this_ptr->fields.WotwUberStateToWwiseData->fields.InheritedMap here
        next::WotwUberStateWwiseStateManager::PopulateAffectedStates(this_ptr);
    }
}
