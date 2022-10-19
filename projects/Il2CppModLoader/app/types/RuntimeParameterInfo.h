#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeParameterInfo {
        namespace {
            inline app::RuntimeParameterInfo__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeParameterInfo__Class** type_info = &type_info_ref;
        inline app::RuntimeParameterInfo__Class* get_class() {
            return il2cpp::get_class<app::RuntimeParameterInfo__Class>(type_info, "System.Reflection", "RuntimeParameterInfo");
        }
        inline app::RuntimeParameterInfo* create() {
            return il2cpp::create_object<app::RuntimeParameterInfo>(get_class());
        }
    } // namespace RuntimeParameterInfo
} // namespace app::classes::types
