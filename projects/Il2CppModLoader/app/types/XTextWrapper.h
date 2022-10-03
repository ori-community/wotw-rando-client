#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XTextWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XTextWrapper__Class** type_info;
        inline app::XTextWrapper__Class* get_class() {
            return il2cpp::get_class<app::XTextWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XTextWrapper");
        }
        inline app::XTextWrapper* create() {
            return il2cpp::create_object<app::XTextWrapper>(get_class());
        }
    } // namespace XTextWrapper
} // namespace app::classes::types
