#pragma once
#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/DictionaryEntry__Array.h>
#include <Modloader/app/structs/DictionaryEntry__Boxed.h>
#include <Modloader/app/structs/DictionaryEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DictionaryEntry {
        inline app::DictionaryEntry__Class** type_info() {
            static app::DictionaryEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DictionaryEntry__Class**)(modloader::win::memory::resolve_rva(0x04728BA0));
            }
            return cache;
        }
        inline app::DictionaryEntry__Class* get_class() {
            return il2cpp::get_class<app::DictionaryEntry__Class>(type_info(), "System.Collections", "DictionaryEntry");
        }
        inline app::DictionaryEntry* create() {
            return il2cpp::create_object<app::DictionaryEntry>(get_class());
        }
        inline app::DictionaryEntry__Boxed* box(app::DictionaryEntry value) {
            return il2cpp::box_value<app::DictionaryEntry__Boxed>(get_class(), value);
        }
        inline app::DictionaryEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::DictionaryEntry__Array>(get_class(), size);
        }
        inline app::DictionaryEntry__Array* create_array(const std::vector<app::DictionaryEntry>& items) {
            return il2cpp::array_new<app::DictionaryEntry__Array>(get_class(), items);
        }
    } // namespace DictionaryEntry
} // namespace app::classes::types
