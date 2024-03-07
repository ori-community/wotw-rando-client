#include <Core/api/game/debug_menu.h>
#include <Modloader/app/methods/CheatsHandler.h>
#include <Modloader/app/types/CheatsHandler.h>
#include <Modloader/app/types/DebugValues.h>

using namespace app::classes;

namespace core::api::game::debug_menu {
    /**
     * This flag is true if Debug Controls have been enabled
     * at any point since the game started or the debug
     * menu has been opened at least once.
     */
    bool debug_was_active_this_session = false;

    /**
     * If true, prevents enabling debug mode
     */
    bool prevent_enabling_debug = false;

    IL2CPP_INTERCEPT(CheatsHandler, void, ActivateDebug, (app::CheatsHandler* this_ptr)) {
        if (prevent_enabling_debug) {
            return;
        }

        next::CheatsHandler::ActivateDebug(this_ptr);
    }

    IL2CPP_INTERCEPT(CheatsHandler, void, ActivateDebugMenu, (app::CheatsHandler* this_ptr)) {
        if (prevent_enabling_debug) {
            return;
        }

        next::CheatsHandler::ActivateDebugMenu(this_ptr);
    }

    void set_prevent_enabling_debug(bool prevent) {
        if (prevent && is_debug_enabled()) {
            set_debug_enabled(false);
        }

        prevent_enabling_debug = prevent;
    }

    bool is_preventing_enabling_debug() {
        return prevent_enabling_debug;
    }

    void set_debug_enabled(bool enable) {
        if (enable && prevent_enabling_debug) {
            return;
        }

        const auto cheats = types::CheatsHandler::get_class()->static_fields;
        if (cheats->Instance->fields.DebugEnabled != enable) {
            cheats->Instance->fields.DebugEnabled = enable;
            cheats->DebugWasEnabled = cheats->DebugWasEnabled || enable;
            cheats->DebugAlwaysEnabled = enable;
            types::DebugValues::get_class()->static_fields->DebugControlsEnabled = enable;
        }
    }

    bool is_debug_enabled() {
        const auto cheats = types::CheatsHandler::get_class()->static_fields;
        return cheats->Instance->fields.DebugEnabled;
    }
}
