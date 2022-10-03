#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeInfo {
        namespace {
            app::TypeInfo__Class* type_info_ref = nullptr;
        }
        app::TypeInfo__Class** type_info = &type_info_ref;
        inline app::TypeInfo__Class* get_class() {
            return il2cpp::get_class<app::TypeInfo__Class>(type_info, "System.Reflection", "TypeInfo");
        }
        inline app::TypeInfo* create() {
            return il2cpp::create_object<app::TypeInfo>(get_class());
        }
    } // namespace TypeInfo
} // namespace app::classes::types
