#pragma once
#include <Modloader/app/structs/ReflectionUtils.h>
#include <Modloader/app/structs/ReflectionUtils__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReflectionUtils {
        inline app::ReflectionUtils__Class** type_info() {
            static app::ReflectionUtils__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReflectionUtils__Class**)(modloader::win::memory::resolve_rva(0x0476A7F0));
            }
            return cache;
        }
        inline app::ReflectionUtils__Class* get_class() {
            return il2cpp::get_class<app::ReflectionUtils__Class>(type_info(), "Newtonsoft.Json.Utilities", "ReflectionUtils");
        }
        inline app::ReflectionUtils* create() {
            return il2cpp::create_object<app::ReflectionUtils>(get_class());
        }
    } // namespace ReflectionUtils
} // namespace app::classes::types
