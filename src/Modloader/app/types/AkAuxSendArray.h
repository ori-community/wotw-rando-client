#pragma once
#include <Modloader/app/structs/AkAuxSendArray.h>
#include <Modloader/app/structs/AkAuxSendArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkAuxSendArray {
        inline app::AkAuxSendArray__Class** type_info() {
            static app::AkAuxSendArray__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkAuxSendArray__Class**)(modloader::win::memory::resolve_rva(0x04733A20));
            }
            return cache;
        }
        inline app::AkAuxSendArray__Class* get_class() {
            return il2cpp::get_class<app::AkAuxSendArray__Class>(type_info(), "", "AkAuxSendArray");
        }
        inline app::AkAuxSendArray* create() {
            return il2cpp::create_object<app::AkAuxSendArray>(get_class());
        }
    } // namespace AkAuxSendArray
} // namespace app::classes::types
