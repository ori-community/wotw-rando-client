#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultDependencyAttribute {
        namespace {
            app::DefaultDependencyAttribute__Class* type_info_ref = nullptr;
        }
        app::DefaultDependencyAttribute__Class** type_info = &type_info_ref;
        inline app::DefaultDependencyAttribute__Class* get_class() {
            return il2cpp::get_class<app::DefaultDependencyAttribute__Class>(type_info, "System.Runtime.CompilerServices", "DefaultDependencyAttribute");
        }
        inline app::DefaultDependencyAttribute* create() {
            return il2cpp::create_object<app::DefaultDependencyAttribute>(get_class());
        }
    } // namespace DefaultDependencyAttribute
} // namespace app::classes::types
