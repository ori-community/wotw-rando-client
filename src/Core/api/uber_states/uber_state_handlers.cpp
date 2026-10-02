#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/enums/uber_state.h>
#include <Core/api/uber_states/uber_state_handlers.h>

#include <Common/ext.h>

#include <Modloader/app/methods/Moon/UberStateController.h>
#include <Modloader/app/methods/Moon/UberStateValueStore.h>
#include <Modloader/app/types/BooleanUberState.h>
#include <Modloader/app/types/ByteUberState.h>
#include <Modloader/app/types/ConditionUberState.h>
#include <Modloader/app/types/CountUberState.h>
#include <Modloader/app/types/IntUberState.h>
#include <Modloader/app/types/PlayerUberStateDescriptor.h>
#include <Modloader/app/types/SavePedestalUberState.h>
#include <Modloader/app/types/SerializedBooleanUberState.h>
#include <Modloader/app/types/SerializedByteUberState.h>
#include <Modloader/app/types/SerializedFloatUberState.h>
#include <Modloader/app/types/SerializedIntUberState.h>
#include <Modloader/app/types/UberStateController.h>
#include <Modloader/il2cpp_helpers.h>

#include <unordered_map>
#include <vector>

using namespace modloader;
using namespace app::classes;
using namespace app::classes::Moon;

namespace core::api::uber_states {
    void apply_all() {
        UberStateController::ApplyAll(app::UberStateApplyContext__Enum::FullStateApply);
    }

    void clear() {
        std::unordered_map<int, double> saved;
        const auto position = game::player::get_position();
        game::player::unbind_all();

        const auto instance = types::UberStateController::get_class()->static_fields->m_currentStateValueStore;
        instance->fields.m_isInitialized = false;
        il2cpp::invoke(instance->fields.m_groupMap, "Clear");
        UberStateValueStore::FinalizeInitialization(instance, false);
        // Because for some reason if we only call it once we lose wall jump.
        scenes::load_default_values();
        scenes::load_default_values();
        game::player::set_position(position);

        apply_all();
    }
} // namespace core::api::uber_states
