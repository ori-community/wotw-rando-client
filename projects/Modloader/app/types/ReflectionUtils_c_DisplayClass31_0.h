#pragma once
#include <Modloader/app/structs/ReflectionUtils_c_DisplayClass31_0.h>
#include <Modloader/app/structs/ReflectionUtils_c_DisplayClass31_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReflectionUtils_c_DisplayClass31_0 {
        inline app::ReflectionUtils_c_DisplayClass31_0__Class** type_info() {
            static app::ReflectionUtils_c_DisplayClass31_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReflectionUtils_c_DisplayClass31_0__Class**)(modloader::win::memory::resolve_rva(0x0475E5F8));
            }
            return cache;
        }
        inline app::ReflectionUtils_c_DisplayClass31_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionUtils_c_DisplayClass31_0__Class>(type_info(), "Newtonsoft.Json.Utilities", "ReflectionUtils", "<>c__DisplayClass31_0");
        }
        inline app::ReflectionUtils_c_DisplayClass31_0* create() {
            return il2cpp::create_object<app::ReflectionUtils_c_DisplayClass31_0>(get_class());
        }
    } // namespace ReflectionUtils_c_DisplayClass31_0
} // namespace app::classes::types
