#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectionObject_c_DisplayClass11_1 {
        inline app::ReflectionObject_c_DisplayClass11_1__Class** type_info = (app::ReflectionObject_c_DisplayClass11_1__Class**)(modloader::win::memory::resolve_rva(0x04742098));
        inline app::ReflectionObject_c_DisplayClass11_1__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionObject_c_DisplayClass11_1__Class>(type_info, "Newtonsoft.Json.Utilities", "ReflectionObject", "<>c__DisplayClass11_1");
        }
        inline app::ReflectionObject_c_DisplayClass11_1* create() {
            return il2cpp::create_object<app::ReflectionObject_c_DisplayClass11_1>(get_class());
        }
    } // namespace ReflectionObject_c_DisplayClass11_1
} // namespace app::classes::types
