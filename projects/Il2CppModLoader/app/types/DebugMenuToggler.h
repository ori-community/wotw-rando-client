#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugMenuToggler {
        namespace {
            app::DebugMenuToggler__Class* type_info_ref = nullptr;
        }
        app::DebugMenuToggler__Class** type_info = &type_info_ref;
        inline app::DebugMenuToggler__Class* get_class() {
            return il2cpp::get_class<app::DebugMenuToggler__Class>(type_info, "", "DebugMenuToggler");
        }
        inline app::DebugMenuToggler* create() {
            return il2cpp::create_object<app::DebugMenuToggler>(get_class());
        }
    } // namespace DebugMenuToggler
} // namespace app::classes::types
