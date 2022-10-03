#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Activator {
        namespace {
            app::Activator__Class* type_info_ref = nullptr;
        }
        app::Activator__Class** type_info = &type_info_ref;
        inline app::Activator__Class* get_class() {
            return il2cpp::get_class<app::Activator__Class>(type_info, "System", "Activator");
        }
        inline app::Activator* create() {
            return il2cpp::create_object<app::Activator>(get_class());
        }
    } // namespace Activator
} // namespace app::classes::types
