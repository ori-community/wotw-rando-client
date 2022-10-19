#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PersistentCallGroup {
        inline app::PersistentCallGroup__Class** type_info = (app::PersistentCallGroup__Class**)(modloader::win::memory::resolve_rva(0x04744710));
        inline app::PersistentCallGroup__Class* get_class() {
            return il2cpp::get_class<app::PersistentCallGroup__Class>(type_info, "UnityEngine.Events", "PersistentCallGroup");
        }
        inline app::PersistentCallGroup* create() {
            return il2cpp::create_object<app::PersistentCallGroup>(get_class());
        }
    } // namespace PersistentCallGroup
} // namespace app::classes::types
