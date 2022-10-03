#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkMIDIPostArray {
        namespace {
            app::AkMIDIPostArray__Class* type_info_ref = nullptr;
        }
        app::AkMIDIPostArray__Class** type_info = &type_info_ref;
        inline app::AkMIDIPostArray__Class* get_class() {
            return il2cpp::get_class<app::AkMIDIPostArray__Class>(type_info, "", "AkMIDIPostArray");
        }
        inline app::AkMIDIPostArray* create() {
            return il2cpp::create_object<app::AkMIDIPostArray>(get_class());
        }
    } // namespace AkMIDIPostArray
} // namespace app::classes::types
