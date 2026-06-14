#pragma once
#include <Modloader/app/structs/DefaultJsonNameTable_Entry.h>
#include <Modloader/app/structs/DefaultJsonNameTable_Entry__Array.h>
#include <Modloader/app/structs/DefaultJsonNameTable_Entry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultJsonNameTable_Entry {
        inline app::DefaultJsonNameTable_Entry__Class** type_info() {
            static app::DefaultJsonNameTable_Entry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DefaultJsonNameTable_Entry__Class**)(modloader::win::memory::resolve_rva(0x04797B10));
            }
            return cache;
        }
        inline app::DefaultJsonNameTable_Entry__Class* get_class() {
            return il2cpp::get_nested_class<app::DefaultJsonNameTable_Entry__Class>(type_info(), "Newtonsoft.Json", "DefaultJsonNameTable", "Entry");
        }
        inline app::DefaultJsonNameTable_Entry* create() {
            return il2cpp::create_object<app::DefaultJsonNameTable_Entry>(get_class());
        }
        inline app::DefaultJsonNameTable_Entry__Array* create_array(int size) {
            return il2cpp::array_new<app::DefaultJsonNameTable_Entry__Array>(get_class(), size);
        }
        inline app::DefaultJsonNameTable_Entry__Array* create_array(const std::vector<app::DefaultJsonNameTable_Entry*>& items) {
            return il2cpp::array_new<app::DefaultJsonNameTable_Entry__Array>(get_class(), items);
        }
    } // namespace DefaultJsonNameTable_Entry
} // namespace app::classes::types
