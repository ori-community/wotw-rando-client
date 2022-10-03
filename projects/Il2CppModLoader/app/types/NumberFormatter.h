#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NumberFormatter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NumberFormatter__Class** type_info;
        inline app::NumberFormatter__Class* get_class() {
            return il2cpp::get_class<app::NumberFormatter__Class>(type_info, "System", "NumberFormatter");
        }
        inline app::NumberFormatter* create() {
            return il2cpp::create_object<app::NumberFormatter>(get_class());
        }
    } // namespace NumberFormatter
} // namespace app::classes::types
