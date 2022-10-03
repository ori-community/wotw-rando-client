#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExpandoObject {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExpandoObject__Class** type_info;
        inline app::ExpandoObject__Class* get_class() {
            return il2cpp::get_class<app::ExpandoObject__Class>(type_info, "System.Dynamic", "ExpandoObject");
        }
        inline app::ExpandoObject* create() {
            return il2cpp::create_object<app::ExpandoObject>(get_class());
        }
    } // namespace ExpandoObject
} // namespace app::classes::types
