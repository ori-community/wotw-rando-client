#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectionObject_c_DisplayClass11_2 {
        inline app::ReflectionObject_c_DisplayClass11_2__Class** type_info = (app::ReflectionObject_c_DisplayClass11_2__Class**)(modloader::win::memory::resolve_rva(0x047251C0));
        inline app::ReflectionObject_c_DisplayClass11_2__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionObject_c_DisplayClass11_2__Class>(type_info, "Newtonsoft.Json.Utilities", "ReflectionObject", "<>c__DisplayClass11_2");
        }
        inline app::ReflectionObject_c_DisplayClass11_2* create() {
            return il2cpp::create_object<app::ReflectionObject_c_DisplayClass11_2>(get_class());
        }
    } // namespace ReflectionObject_c_DisplayClass11_2
} // namespace app::classes::types
