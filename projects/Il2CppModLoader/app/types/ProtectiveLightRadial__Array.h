#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProtectiveLightRadial__Array {
        namespace {
            inline app::ProtectiveLightRadial__Array__Class* type_info_ref = nullptr;
        }
        inline app::ProtectiveLightRadial__Array__Class** type_info = &type_info_ref;
        inline app::ProtectiveLightRadial__Array__Class* get_class() {
            return il2cpp::get_class<app::ProtectiveLightRadial__Array__Class>(type_info, "", "ProtectiveLightRadial[]");
        }
        inline app::ProtectiveLightRadial__Array* create() {
            return il2cpp::create_object<app::ProtectiveLightRadial__Array>(get_class());
        }
    } // namespace ProtectiveLightRadial__Array
} // namespace app::classes::types
