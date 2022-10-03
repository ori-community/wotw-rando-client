#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkAuxSendArray_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkAuxSendArray_c__Class** type_info;
        inline app::AkAuxSendArray_c__Class* get_class() {
            return il2cpp::get_nested_class<app::AkAuxSendArray_c__Class>(type_info, "", "AkAuxSendArray", "<>c");
        }
        inline app::AkAuxSendArray_c* create() {
            return il2cpp::create_object<app::AkAuxSendArray_c>(get_class());
        }
    } // namespace AkAuxSendArray_c
} // namespace app::classes::types
