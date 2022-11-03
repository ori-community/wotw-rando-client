#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectionUtils {
        inline app::ReflectionUtils__Class** type_info = (app::ReflectionUtils__Class**)(modloader::win::memory::resolve_rva(0x0476A7F0));
        inline app::ReflectionUtils__Class* get_class() {
            return il2cpp::get_class<app::ReflectionUtils__Class>(type_info, "Newtonsoft.Json.Utilities", "ReflectionUtils");
        }
        inline app::ReflectionUtils* create() {
            return il2cpp::create_object<app::ReflectionUtils>(get_class());
        }
    } // namespace ReflectionUtils
} // namespace app::classes::types
