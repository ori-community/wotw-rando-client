#pragma once
#include <Modloader/app/structs/DefaultJsonNameTable.h>
#include <Modloader/app/structs/DefaultJsonNameTable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultJsonNameTable {
        inline app::DefaultJsonNameTable__Class** type_info() {
            static app::DefaultJsonNameTable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DefaultJsonNameTable__Class**)(modloader::win::memory::resolve_rva(0x0474B180));
            }
            return cache;
        }
        inline app::DefaultJsonNameTable__Class* get_class() {
            return il2cpp::get_class<app::DefaultJsonNameTable__Class>(type_info(), "Newtonsoft.Json", "DefaultJsonNameTable");
        }
        inline app::DefaultJsonNameTable* create() {
            return il2cpp::create_object<app::DefaultJsonNameTable>(get_class());
        }
    } // namespace DefaultJsonNameTable
} // namespace app::classes::types
