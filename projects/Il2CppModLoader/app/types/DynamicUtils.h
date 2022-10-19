#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicUtils {
        namespace {
            inline app::DynamicUtils__Class* type_info_ref = nullptr;
        }
        inline app::DynamicUtils__Class** type_info = &type_info_ref;
        inline app::DynamicUtils__Class* get_class() {
            return il2cpp::get_class<app::DynamicUtils__Class>(type_info, "Newtonsoft.Json.Utilities", "DynamicUtils");
        }
        inline app::DynamicUtils* create() {
            return il2cpp::create_object<app::DynamicUtils>(get_class());
        }
    } // namespace DynamicUtils
} // namespace app::classes::types
