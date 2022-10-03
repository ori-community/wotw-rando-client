#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoLockLookDirection {
        namespace {
            app::SkeetoLockLookDirection__Class* type_info_ref = nullptr;
        }
        app::SkeetoLockLookDirection__Class** type_info = &type_info_ref;
        inline app::SkeetoLockLookDirection__Class* get_class() {
            return il2cpp::get_class<app::SkeetoLockLookDirection__Class>(type_info, "", "SkeetoLockLookDirection");
        }
        inline app::SkeetoLockLookDirection* create() {
            return il2cpp::create_object<app::SkeetoLockLookDirection>(get_class());
        }
    } // namespace SkeetoLockLookDirection
} // namespace app::classes::types
