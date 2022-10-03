#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XContainerWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XContainerWrapper__Class** type_info;
        inline app::XContainerWrapper__Class* get_class() {
            return il2cpp::get_class<app::XContainerWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XContainerWrapper");
        }
        inline app::XContainerWrapper* create() {
            return il2cpp::create_object<app::XContainerWrapper>(get_class());
        }
    } // namespace XContainerWrapper
} // namespace app::classes::types
