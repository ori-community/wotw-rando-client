#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LogCallbackData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LogCallbackData__Class** type_info;
        inline app::LogCallbackData__Class* get_class() {
            return il2cpp::get_class<app::LogCallbackData__Class>(type_info, "", "LogCallbackData");
        }
        inline app::LogCallbackData* create() {
            return il2cpp::create_object<app::LogCallbackData>(get_class());
        }
    } // namespace LogCallbackData
} // namespace app::classes::types
