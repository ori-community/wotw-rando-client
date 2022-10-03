#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultJsonNameTable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DefaultJsonNameTable__Class** type_info;
        inline app::DefaultJsonNameTable__Class* get_class() {
            return il2cpp::get_class<app::DefaultJsonNameTable__Class>(type_info, "Newtonsoft.Json", "DefaultJsonNameTable");
        }
        inline app::DefaultJsonNameTable* create() {
            return il2cpp::create_object<app::DefaultJsonNameTable>(get_class());
        }
    } // namespace DefaultJsonNameTable
} // namespace app::classes::types
