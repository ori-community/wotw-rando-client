#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDeathUberStateSetter__Array {
        namespace {
            inline app::IDeathUberStateSetter__Array__Class* type_info_ref = nullptr;
        }
        inline app::IDeathUberStateSetter__Array__Class** type_info = &type_info_ref;
        inline app::IDeathUberStateSetter__Array__Class* get_class() {
            return il2cpp::get_class<app::IDeathUberStateSetter__Array__Class>(type_info, "", "IDeathUberStateSetter[]");
        }
        inline app::IDeathUberStateSetter__Array* create() {
            return il2cpp::create_object<app::IDeathUberStateSetter__Array>(get_class());
        }
    } // namespace IDeathUberStateSetter__Array
} // namespace app::classes::types
