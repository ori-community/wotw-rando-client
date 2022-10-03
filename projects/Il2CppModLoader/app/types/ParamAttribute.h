#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParamAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ParamAttribute__Class** type_info;
        inline app::ParamAttribute__Class* get_class() {
            return il2cpp::get_class<app::ParamAttribute__Class>(type_info, "Moon.Network.Web", "ParamAttribute");
        }
        inline app::ParamAttribute* create() {
            return il2cpp::create_object<app::ParamAttribute>(get_class());
        }
    } // namespace ParamAttribute
} // namespace app::classes::types
