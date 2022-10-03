#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoPropertyInfo {
        namespace {
            app::MonoPropertyInfo__Class* type_info_ref = nullptr;
        }
        app::MonoPropertyInfo__Class** type_info = &type_info_ref;
        inline app::MonoPropertyInfo__Class* get_class() {
            return il2cpp::get_class<app::MonoPropertyInfo__Class>(type_info, "System.Reflection", "MonoPropertyInfo");
        }
        inline app::MonoPropertyInfo* create() {
            return il2cpp::create_object<app::MonoPropertyInfo>(get_class());
        }
        inline app::MonoPropertyInfo__Boxed* box(app::MonoPropertyInfo value) {
            return il2cpp::box_value<app::MonoPropertyInfo__Boxed>(get_class(), value);
        }
    } // namespace MonoPropertyInfo
} // namespace app::classes::types
