#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TargetFrameworkAttribute {
        namespace {
            inline app::TargetFrameworkAttribute__Class* type_info_ref = nullptr;
        }
        inline app::TargetFrameworkAttribute__Class** type_info = &type_info_ref;
        inline app::TargetFrameworkAttribute__Class* get_class() {
            return il2cpp::get_class<app::TargetFrameworkAttribute__Class>(type_info, "System.Runtime.Versioning", "TargetFrameworkAttribute");
        }
        inline app::TargetFrameworkAttribute* create() {
            return il2cpp::create_object<app::TargetFrameworkAttribute>(get_class());
        }
    } // namespace TargetFrameworkAttribute
} // namespace app::classes::types
