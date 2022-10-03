#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkThreadProperties {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkThreadProperties__Class** type_info;
        inline app::AkThreadProperties__Class* get_class() {
            return il2cpp::get_class<app::AkThreadProperties__Class>(type_info, "", "AkThreadProperties");
        }
        inline app::AkThreadProperties* create() {
            return il2cpp::create_object<app::AkThreadProperties>(get_class());
        }
    } // namespace AkThreadProperties
} // namespace app::classes::types
