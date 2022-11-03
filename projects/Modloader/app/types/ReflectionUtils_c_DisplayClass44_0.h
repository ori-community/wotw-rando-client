#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectionUtils_c_DisplayClass44_0 {
        inline app::ReflectionUtils_c_DisplayClass44_0__Class** type_info = (app::ReflectionUtils_c_DisplayClass44_0__Class**)(modloader::win::memory::resolve_rva(0x0478BF88));
        inline app::ReflectionUtils_c_DisplayClass44_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionUtils_c_DisplayClass44_0__Class>(type_info, "Newtonsoft.Json.Utilities", "ReflectionUtils", "<>c__DisplayClass44_0");
        }
        inline app::ReflectionUtils_c_DisplayClass44_0* create() {
            return il2cpp::create_object<app::ReflectionUtils_c_DisplayClass44_0>(get_class());
        }
    } // namespace ReflectionUtils_c_DisplayClass44_0
} // namespace app::classes::types
