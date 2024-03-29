#pragma once
#include <Modloader/app/structs/NameTable_Entry.h>
#include <Modloader/app/structs/NameTable_Entry__Array.h>
#include <Modloader/app/structs/NameTable_Entry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NameTable_Entry {
        inline app::NameTable_Entry__Class** type_info() {
            static app::NameTable_Entry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NameTable_Entry__Class**)(modloader::win::memory::resolve_rva(0x0476C8E8));
            }
            return cache;
        }
        inline app::NameTable_Entry__Class* get_class() {
            return il2cpp::get_nested_class<app::NameTable_Entry__Class>(type_info(), "System.Xml", "NameTable", "Entry");
        }
        inline app::NameTable_Entry* create() {
            return il2cpp::create_object<app::NameTable_Entry>(get_class());
        }
        inline app::NameTable_Entry__Array* create_array(int size) {
            return il2cpp::array_new<app::NameTable_Entry__Array>(get_class(), size);
        }
        inline app::NameTable_Entry__Array* create_array(const std::vector<app::NameTable_Entry*>& items) {
            return il2cpp::array_new<app::NameTable_Entry__Array>(get_class(), items);
        }
    } // namespace NameTable_Entry
} // namespace app::classes::types
