#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectionUtils_c_DisplayClass44_1 {
        inline app::ReflectionUtils_c_DisplayClass44_1__Class** type_info = (app::ReflectionUtils_c_DisplayClass44_1__Class**)(modloader::win::memory::resolve_rva(0x047713C8));
        inline app::ReflectionUtils_c_DisplayClass44_1__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionUtils_c_DisplayClass44_1__Class>(type_info, "Newtonsoft.Json.Utilities", "ReflectionUtils", "<>c__DisplayClass44_1");
        }
        inline app::ReflectionUtils_c_DisplayClass44_1* create() {
            return il2cpp::create_object<app::ReflectionUtils_c_DisplayClass44_1>(get_class());
        }
    } // namespace ReflectionUtils_c_DisplayClass44_1
} // namespace app::classes::types
