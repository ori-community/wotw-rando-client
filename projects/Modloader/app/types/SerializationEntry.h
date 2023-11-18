#pragma once
#include <Modloader/app/structs/SerializationEntry.h>
#include <Modloader/app/structs/SerializationEntry__Boxed.h>
#include <Modloader/app/structs/SerializationEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializationEntry {
        inline app::SerializationEntry__Class** type_info() {
            static app::SerializationEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SerializationEntry__Class**)(modloader::win::memory::resolve_rva(0x0474ECE0));
            }
            return cache;
        }
        inline app::SerializationEntry__Class* get_class() {
            return il2cpp::get_class<app::SerializationEntry__Class>(type_info(), "System.Runtime.Serialization", "SerializationEntry");
        }
        inline app::SerializationEntry* create() {
            return il2cpp::create_object<app::SerializationEntry>(get_class());
        }
        inline app::SerializationEntry__Boxed* box(app::SerializationEntry value) {
            return il2cpp::box_value<app::SerializationEntry__Boxed>(get_class(), value);
        }
    } // namespace SerializationEntry
} // namespace app::classes::types
