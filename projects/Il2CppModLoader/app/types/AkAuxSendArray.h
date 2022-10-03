#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkAuxSendArray {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkAuxSendArray__Class** type_info;
        inline app::AkAuxSendArray__Class* get_class() {
            return il2cpp::get_class<app::AkAuxSendArray__Class>(type_info, "", "AkAuxSendArray");
        }
        inline app::AkAuxSendArray* create() {
            return il2cpp::create_object<app::AkAuxSendArray>(get_class());
        }
    } // namespace AkAuxSendArray
} // namespace app::classes::types
