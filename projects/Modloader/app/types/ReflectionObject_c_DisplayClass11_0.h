#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReflectionObject_c_DisplayClass11_0__Class.h>
#include <Modloader/app/structs/ReflectionObject_c_DisplayClass11_0.h>

namespace app::classes::types {
    namespace ReflectionObject_c_DisplayClass11_0 {
        inline app::ReflectionObject_c_DisplayClass11_0__Class** type_info = (app::ReflectionObject_c_DisplayClass11_0__Class**)(modloader::win::memory::resolve_rva(0x04700F08));
        inline app::ReflectionObject_c_DisplayClass11_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionObject_c_DisplayClass11_0__Class>(type_info, "Newtonsoft.Json.Utilities", "ReflectionObject", "<>c__DisplayClass11_0");
        }
        inline app::ReflectionObject_c_DisplayClass11_0* create() {
            return il2cpp::create_object<app::ReflectionObject_c_DisplayClass11_0>(get_class());
        }
    } // namespace ReflectionObject_c_DisplayClass11_0
} // namespace app::classes::types
