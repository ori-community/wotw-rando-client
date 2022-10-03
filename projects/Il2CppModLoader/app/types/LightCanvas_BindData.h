#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCanvas_BindData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightCanvas_BindData__Class** type_info;
        inline app::LightCanvas_BindData__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCanvas_BindData__Class>(type_info, "", "LightCanvas", "BindData");
        }
        inline app::LightCanvas_BindData* create() {
            return il2cpp::create_object<app::LightCanvas_BindData>(get_class());
        }
    } // namespace LightCanvas_BindData
} // namespace app::classes::types
