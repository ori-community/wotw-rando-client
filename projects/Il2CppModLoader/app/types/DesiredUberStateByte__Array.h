#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DesiredUberStateByte__Array {
        namespace {
            inline app::DesiredUberStateByte__Array__Class* type_info_ref = nullptr;
        }
        inline app::DesiredUberStateByte__Array__Class** type_info = &type_info_ref;
        inline app::DesiredUberStateByte__Array__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateByte__Array__Class>(type_info, "", "DesiredUberStateByte[]");
        }
        inline app::DesiredUberStateByte__Array* create() {
            return il2cpp::create_object<app::DesiredUberStateByte__Array>(get_class());
        }
    } // namespace DesiredUberStateByte__Array
} // namespace app::classes::types
