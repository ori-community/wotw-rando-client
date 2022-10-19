#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultJsonNameTable {
        inline app::DefaultJsonNameTable__Class** type_info = (app::DefaultJsonNameTable__Class**)(modloader::win::memory::resolve_rva(0x0474B180));
        inline app::DefaultJsonNameTable__Class* get_class() {
            return il2cpp::get_class<app::DefaultJsonNameTable__Class>(type_info, "Newtonsoft.Json", "DefaultJsonNameTable");
        }
        inline app::DefaultJsonNameTable* create() {
            return il2cpp::create_object<app::DefaultJsonNameTable>(get_class());
        }
    } // namespace DefaultJsonNameTable
} // namespace app::classes::types
