#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectionUtils_c_DisplayClass31_0_1 {
        inline app::ReflectionUtils_c_DisplayClass31_0_1__Class** type_info = (app::ReflectionUtils_c_DisplayClass31_0_1__Class**)(modloader::win::memory::resolve_rva(0x04774FC0));
        inline app::ReflectionUtils_c_DisplayClass31_0_1__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionUtils_c_DisplayClass31_0_1__Class>(type_info, "PlayFab.Json", "ReflectionUtils", "<>c__DisplayClass31_0");
        }
        inline app::ReflectionUtils_c_DisplayClass31_0_1* create() {
            return il2cpp::create_object<app::ReflectionUtils_c_DisplayClass31_0_1>(get_class());
        }
    } // namespace ReflectionUtils_c_DisplayClass31_0_1
} // namespace app::classes::types
