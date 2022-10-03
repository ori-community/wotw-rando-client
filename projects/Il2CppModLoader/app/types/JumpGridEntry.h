#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumpGridEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JumpGridEntry__Class** type_info;
        inline app::JumpGridEntry__Class* get_class() {
            return il2cpp::get_class<app::JumpGridEntry__Class>(type_info, "", "JumpGridEntry");
        }
        inline app::JumpGridEntry* create() {
            return il2cpp::create_object<app::JumpGridEntry>(get_class());
        }
    } // namespace JumpGridEntry
} // namespace app::classes::types
