#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkAuxSendValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkAuxSendValue__Class** type_info;
        inline app::AkAuxSendValue__Class* get_class() {
            return il2cpp::get_class<app::AkAuxSendValue__Class>(type_info, "", "AkAuxSendValue");
        }
        inline app::AkAuxSendValue* create() {
            return il2cpp::create_object<app::AkAuxSendValue>(get_class());
        }
    } // namespace AkAuxSendValue
} // namespace app::classes::types
