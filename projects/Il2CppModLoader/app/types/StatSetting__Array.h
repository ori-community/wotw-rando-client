#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StatSetting__Array {
        namespace {
            inline app::StatSetting__Array__Class* type_info_ref = nullptr;
        }
        inline app::StatSetting__Array__Class** type_info = &type_info_ref;
        inline app::StatSetting__Array__Class* get_class() {
            return il2cpp::get_class<app::StatSetting__Array__Class>(type_info, "", "StatSetting[]");
        }
        inline app::StatSetting__Array* create() {
            return il2cpp::create_object<app::StatSetting__Array>(get_class());
        }
    } // namespace StatSetting__Array
} // namespace app::classes::types
