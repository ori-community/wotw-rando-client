#include <Core/dev/object_visualizer.h>
#include <Modloader/app/methods/WotwUberStateWwiseStateManager.h>
#include <Modloader/app/types/State.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/console.h>
#include <format>
#include <fstream>

using namespace app::classes;

namespace {
    IL2CPP_INTERCEPT(WotwUberStateWwiseStateManager, void, PopulateAffectedStates, (app::WotwUberStateWwiseStateManager * this_ptr )) {
        // Modify this_ptr->fields.WotwUberStateToWwiseData->fields.InheritedMap here
        next::WotwUberStateWwiseStateManager::PopulateAffectedStates(this_ptr);
    }
}
