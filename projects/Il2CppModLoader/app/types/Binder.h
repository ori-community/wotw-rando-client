#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Binder {
        namespace {
            app::Binder__Class* type_info_ref = nullptr;
        }
        app::Binder__Class** type_info = &type_info_ref;
        inline app::Binder__Class* get_class() {
            return il2cpp::get_class<app::Binder__Class>(type_info, "System.Reflection", "Binder");
        }
        inline app::Binder* create() {
            return il2cpp::create_object<app::Binder>(get_class());
        }
    } // namespace Binder
} // namespace app::classes::types
