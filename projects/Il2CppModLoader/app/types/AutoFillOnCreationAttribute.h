#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AutoFillOnCreationAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AutoFillOnCreationAttribute__Class** type_info;
        inline app::AutoFillOnCreationAttribute__Class* get_class() {
            return il2cpp::get_class<app::AutoFillOnCreationAttribute__Class>(type_info, "Moon.Timeline", "AutoFillOnCreationAttribute");
        }
        inline app::AutoFillOnCreationAttribute* create() {
            return il2cpp::create_object<app::AutoFillOnCreationAttribute>(get_class());
        }
    } // namespace AutoFillOnCreationAttribute
} // namespace app::classes::types
