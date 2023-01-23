#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReflectionUtils_c__Class.h>
#include <Modloader/app/structs/ReflectionUtils_c.h>

namespace app::classes::types {
    namespace ReflectionUtils_c {
        inline app::ReflectionUtils_c__Class** type_info = (app::ReflectionUtils_c__Class**)(modloader::win::memory::resolve_rva(0x04762C00));
        inline app::ReflectionUtils_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionUtils_c__Class>(type_info, "Newtonsoft.Json.Utilities", "ReflectionUtils", "<>c");
        }
        inline app::ReflectionUtils_c* create() {
            return il2cpp::create_object<app::ReflectionUtils_c>(get_class());
        }
    } // namespace ReflectionUtils_c
} // namespace app::classes::types
