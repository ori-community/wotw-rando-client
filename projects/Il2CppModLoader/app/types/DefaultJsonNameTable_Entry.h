#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultJsonNameTable_Entry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DefaultJsonNameTable_Entry__Class** type_info;
        inline app::DefaultJsonNameTable_Entry__Class* get_class() {
            return il2cpp::get_nested_class<app::DefaultJsonNameTable_Entry__Class>(type_info, "Newtonsoft.Json", "DefaultJsonNameTable", "Entry");
        }
        inline app::DefaultJsonNameTable_Entry* create() {
            return il2cpp::create_object<app::DefaultJsonNameTable_Entry>(get_class());
        }
        inline app::DefaultJsonNameTable_Entry__Array* create_array(int size) {
            return il2cpp::array_new<app::DefaultJsonNameTable_Entry__Array>(get_class(), size);
        }
    } // namespace DefaultJsonNameTable_Entry
} // namespace app::classes::types
