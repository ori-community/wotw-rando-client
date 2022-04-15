#include <macros.h>
#include <interop/csharp_bridge.h>
#include <uber_states/uber_state_helper.h>
#include <uber_states/uber_state_interface.h>

#include <Common/ext.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

namespace
{
    bool handle_glades_teleporter(std::string_view identifier)
    {
        if (identifier != "kwoloksCavernSaveRoomA")
            return false;

        auto area = get_player_area();
        if (area != app::GameWorldAreaID__Enum_WellspringGlades)
            return false;

        // We are in glades TP, activate that one instead.
        uber_states::UberState(static_cast<UberStateGroup>(42178), 42096).set(3);
        return uber_states::UberState(UberStateGroup::RandoConfig, 0).get<bool>();
    }

    IL2CPP_BINDING(, SeinCharacter, app::Vector3, get_Position, (app::SeinCharacter* this_ptr));
    STATIC_IL2CPP_INTERCEPT(, SavePedestalController, void, Activate, (app::String* identifier)) {
        auto teleporter_identifier = il2cpp::convert_csstring(identifier);
        if (!handle_glades_teleporter(teleporter_identifier))
            SavePedestalController::Activate(identifier);
    }
}
