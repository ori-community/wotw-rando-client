#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoTODOAttribute {
        namespace {
            app::MonoTODOAttribute__Class* type_info_ref = nullptr;
        }
        app::MonoTODOAttribute__Class** type_info = &type_info_ref;
        inline app::MonoTODOAttribute__Class* get_class() {
            return il2cpp::get_class<app::MonoTODOAttribute__Class>(type_info, "System", "MonoTODOAttribute");
        }
        inline app::MonoTODOAttribute* create() {
            return il2cpp::create_object<app::MonoTODOAttribute>(get_class());
        }
    } // namespace MonoTODOAttribute
} // namespace app::classes::types
