#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NPCMessageBoxWrapper {
        inline app::NPCMessageBoxWrapper__Class** type_info = (app::NPCMessageBoxWrapper__Class**)(modloader::win::memory::resolve_rva(0x0474AB98));
        inline app::NPCMessageBoxWrapper__Class* get_class() {
            return il2cpp::get_class<app::NPCMessageBoxWrapper__Class>(type_info, "", "NPCMessageBoxWrapper");
        }
        inline app::NPCMessageBoxWrapper* create() {
            return il2cpp::create_object<app::NPCMessageBoxWrapper>(get_class());
        }
    } // namespace NPCMessageBoxWrapper
} // namespace app::classes::types
