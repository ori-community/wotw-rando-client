#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkAuxSendArray {
        inline app::AkAuxSendArray__Class** type_info = (app::AkAuxSendArray__Class**)(modloader::win::memory::resolve_rva(0x04733A20));
        inline app::AkAuxSendArray__Class* get_class() {
            return il2cpp::get_class<app::AkAuxSendArray__Class>(type_info, "", "AkAuxSendArray");
        }
        inline app::AkAuxSendArray* create() {
            return il2cpp::create_object<app::AkAuxSendArray>(get_class());
        }
    } // namespace AkAuxSendArray
} // namespace app::classes::types
