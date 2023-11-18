#pragma once
#include <Modloader/app/structs/DefaultJsonNameTable_Entry__Array.h>
#include <Modloader/app/structs/DefaultJsonNameTable_Entry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultJsonNameTable_Entry__Array {
        inline app::DefaultJsonNameTable_Entry__Array__Class** type_info() {
            static app::DefaultJsonNameTable_Entry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DefaultJsonNameTable_Entry__Array__Class**)(modloader::win::memory::resolve_rva(0x0471E048));
            }
            return cache;
        }
        inline app::DefaultJsonNameTable_Entry__Array__Class* get_class() {
            return il2cpp::get_class<app::DefaultJsonNameTable_Entry__Array__Class>(type_info(), "Newtonsoft.Json", "DefaultJsonNameTable+Entry[]");
        }
        inline app::DefaultJsonNameTable_Entry__Array* create() {
            return il2cpp::create_object<app::DefaultJsonNameTable_Entry__Array>(get_class());
        }
    } // namespace DefaultJsonNameTable_Entry__Array
} // namespace app::classes::types
