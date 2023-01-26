#pragma once
#include <Modloader/app/structs/AkMIDIPostArray.h>
#include <Modloader/app/structs/AkMIDIPostArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkMIDIPostArray {
        inline app::AkMIDIPostArray__Class** type_info() {
            static app::AkMIDIPostArray__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkMIDIPostArray__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkMIDIPostArray__Class* get_class() {
            return il2cpp::get_class<app::AkMIDIPostArray__Class>(type_info(), "", "AkMIDIPostArray");
        }
        inline app::AkMIDIPostArray* create() {
            return il2cpp::create_object<app::AkMIDIPostArray>(get_class());
        }
    } // namespace AkMIDIPostArray
} // namespace app::classes::types
