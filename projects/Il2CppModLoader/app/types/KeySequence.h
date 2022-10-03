#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeySequence {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KeySequence__Class** type_info;
        inline app::KeySequence__Class* get_class() {
            return il2cpp::get_class<app::KeySequence__Class>(type_info, "System.Xml.Schema", "KeySequence");
        }
        inline app::KeySequence* create() {
            return il2cpp::create_object<app::KeySequence>(get_class());
        }
    } // namespace KeySequence
} // namespace app::classes::types
