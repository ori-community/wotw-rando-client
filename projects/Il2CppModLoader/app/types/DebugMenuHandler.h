#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugMenuHandler {
        namespace {
            app::DebugMenuHandler__Class* type_info_ref = nullptr;
        }
        app::DebugMenuHandler__Class** type_info = &type_info_ref;
        inline app::DebugMenuHandler__Class* get_class() {
            return il2cpp::get_class<app::DebugMenuHandler__Class>(type_info, "", "DebugMenuHandler");
        }
        inline app::DebugMenuHandler* create() {
            return il2cpp::create_object<app::DebugMenuHandler>(get_class());
        }
    } // namespace DebugMenuHandler
} // namespace app::classes::types
