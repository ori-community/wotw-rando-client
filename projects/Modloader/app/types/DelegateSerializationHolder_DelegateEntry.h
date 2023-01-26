#pragma once
#include <Modloader/app/structs/DelegateSerializationHolder_DelegateEntry.h>
#include <Modloader/app/structs/DelegateSerializationHolder_DelegateEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DelegateSerializationHolder_DelegateEntry {
        inline app::DelegateSerializationHolder_DelegateEntry__Class** type_info() {
            static app::DelegateSerializationHolder_DelegateEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DelegateSerializationHolder_DelegateEntry__Class**)(modloader::win::memory::resolve_rva(0x04708670));
            }
            return cache;
        }
        inline app::DelegateSerializationHolder_DelegateEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::DelegateSerializationHolder_DelegateEntry__Class>(type_info(), "System", "DelegateSerializationHolder", "DelegateEntry");
        }
        inline app::DelegateSerializationHolder_DelegateEntry* create() {
            return il2cpp::create_object<app::DelegateSerializationHolder_DelegateEntry>(get_class());
        }
    } // namespace DelegateSerializationHolder_DelegateEntry
} // namespace app::classes::types
