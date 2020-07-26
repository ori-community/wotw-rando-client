#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

namespace
{
    STATIC_IL2CPP_INTERCEPT(, SavePedestalController, void, Activate, (app::String* identifier)) {
        auto test = il2cpp::convert_csstring(identifier);
        // Glades teleporter weirdness.
        if (test == "kwoloksCavernSaveRoomA")
            return;

        SavePedestalController::Activate(identifier);
    }

    // Dont reactivate teleporters we have visited if we for some reason set teleporter uber states to false.
    bool overwrite_is_visited = false;
    STATIC_IL2CPP_INTERCEPT(, RuntimeGameWorldArea, bool, IsVisited, (app::RuntimeGameWorldArea* this_ptr, app::Vector3 position)) {
        if (overwrite_is_visited)
            return false;

        return RuntimeGameWorldArea::IsVisited(this_ptr, position);
    }

    STATIC_IL2CPP_INTERCEPT(, SavePedestalController, bool, IsTeleporterActiveAtMapPosition, (app::Vector2 position)) {
        overwrite_is_visited = true;
        auto ret = SavePedestalController::IsTeleporterActiveAtMapPosition(position);
        overwrite_is_visited = false;
        return ret;
    }
}