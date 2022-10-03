#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExpandoObjectConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExpandoObjectConverter__Class** type_info;
        inline app::ExpandoObjectConverter__Class* get_class() {
            return il2cpp::get_class<app::ExpandoObjectConverter__Class>(type_info, "Newtonsoft.Json.Converters", "ExpandoObjectConverter");
        }
        inline app::ExpandoObjectConverter* create() {
            return il2cpp::create_object<app::ExpandoObjectConverter>(get_class());
        }
    } // namespace ExpandoObjectConverter
} // namespace app::classes::types
