#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CLRConfig {
        namespace {
            inline app::CLRConfig__Class* type_info_ref = nullptr;
        }
        inline app::CLRConfig__Class** type_info = &type_info_ref;
        inline app::CLRConfig__Class* get_class() {
            return il2cpp::get_class<app::CLRConfig__Class>(type_info, "System", "CLRConfig");
        }
        inline app::CLRConfig* create() {
            return il2cpp::create_object<app::CLRConfig>(get_class());
        }
    } // namespace CLRConfig
} // namespace app::classes::types
