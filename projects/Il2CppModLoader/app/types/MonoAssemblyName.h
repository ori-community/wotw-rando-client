#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoAssemblyName {
        namespace {
            app::MonoAssemblyName__Class* type_info_ref = nullptr;
        }
        app::MonoAssemblyName__Class** type_info = &type_info_ref;
        inline app::MonoAssemblyName__Class* get_class() {
            return il2cpp::get_class<app::MonoAssemblyName__Class>(type_info, "Mono", "MonoAssemblyName");
        }
        inline app::MonoAssemblyName* create() {
            return il2cpp::create_object<app::MonoAssemblyName>(get_class());
        }
        inline app::MonoAssemblyName__Boxed* box(app::MonoAssemblyName value) {
            return il2cpp::box_value<app::MonoAssemblyName__Boxed>(get_class(), value);
        }
    } // namespace MonoAssemblyName
} // namespace app::classes::types
