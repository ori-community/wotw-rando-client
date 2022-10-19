#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DelegateSerializationHolder_DelegateEntry {
        inline app::DelegateSerializationHolder_DelegateEntry__Class** type_info = (app::DelegateSerializationHolder_DelegateEntry__Class**)(modloader::win::memory::resolve_rva(0x04708670));
        inline app::DelegateSerializationHolder_DelegateEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::DelegateSerializationHolder_DelegateEntry__Class>(type_info, "System", "DelegateSerializationHolder", "DelegateEntry");
        }
        inline app::DelegateSerializationHolder_DelegateEntry* create() {
            return il2cpp::create_object<app::DelegateSerializationHolder_DelegateEntry>(get_class());
        }
    } // namespace DelegateSerializationHolder_DelegateEntry
} // namespace app::classes::types
