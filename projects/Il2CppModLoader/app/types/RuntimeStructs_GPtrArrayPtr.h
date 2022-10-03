#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeStructs_GPtrArrayPtr {
        namespace {
            app::RuntimeStructs_GPtrArrayPtr__Class* type_info_ref = nullptr;
        }
        app::RuntimeStructs_GPtrArrayPtr__Class** type_info = &type_info_ref;
        inline app::RuntimeStructs_GPtrArrayPtr__Class* get_class() {
            return il2cpp::get_class<app::RuntimeStructs_GPtrArrayPtr__Class>(type_info, "Mono", "RuntimeStructs+GPtrArray*");
        }
        inline app::RuntimeStructs_GPtrArrayPtr* create() {
            return il2cpp::create_object<app::RuntimeStructs_GPtrArrayPtr>(get_class());
        }
    } // namespace RuntimeStructs_GPtrArrayPtr
} // namespace app::classes::types
