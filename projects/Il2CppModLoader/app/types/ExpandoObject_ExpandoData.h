#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExpandoObject_ExpandoData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExpandoObject_ExpandoData__Class** type_info;
        inline app::ExpandoObject_ExpandoData__Class* get_class() {
            return il2cpp::get_nested_class<app::ExpandoObject_ExpandoData__Class>(type_info, "System.Dynamic", "ExpandoObject", "ExpandoData");
        }
        inline app::ExpandoObject_ExpandoData* create() {
            return il2cpp::create_object<app::ExpandoObject_ExpandoData>(get_class());
        }
    } // namespace ExpandoObject_ExpandoData
} // namespace app::classes::types
