#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultJsonNameTable_Entry__Array {
        inline app::DefaultJsonNameTable_Entry__Array__Class** type_info = (app::DefaultJsonNameTable_Entry__Array__Class**)(modloader::win::memory::resolve_rva(0x0471E048));
        inline app::DefaultJsonNameTable_Entry__Array__Class* get_class() {
            return il2cpp::get_class<app::DefaultJsonNameTable_Entry__Array__Class>(type_info, "Newtonsoft.Json", "DefaultJsonNameTable+Entry[]");
        }
        inline app::DefaultJsonNameTable_Entry__Array* create() {
            return il2cpp::create_object<app::DefaultJsonNameTable_Entry__Array>(get_class());
        }
    } // namespace DefaultJsonNameTable_Entry__Array
} // namespace app::classes::types
