#include <Core/api/input.h>
#include <Modloader/app/types/GameSettings.h>
#include <Modloader/il2cpp_helpers.h>

namespace core::api::input {
    using namespace app::classes;

    app::ControlScheme__Enum get_current_control_scheme() {
        static app::GameSettings* settings = nullptr;
        if (il2cpp::unity::is_valid(settings)) {
            return settings->fields.m_currentControlSchemes;
        }

        settings = types::GameSettings::get_class()->static_fields->Instance;
        return il2cpp::unity::is_valid(settings)
            ? settings->fields.m_currentControlSchemes
            : app::ControlScheme__Enum::KeyboardAndMouse;
    }
}
