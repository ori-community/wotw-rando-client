#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkeetoLockLookDirection {
        namespace {
            inline app::SkeetoLockLookDirection__Class* type_info_ref = nullptr;
        }
        inline app::SkeetoLockLookDirection__Class** type_info = &type_info_ref;
        inline app::SkeetoLockLookDirection__Class* get_class() {
            return il2cpp::get_class<app::SkeetoLockLookDirection__Class>(type_info, "", "SkeetoLockLookDirection");
        }
        inline app::SkeetoLockLookDirection* create() {
            return il2cpp::create_object<app::SkeetoLockLookDirection>(get_class());
        }
    } // namespace SkeetoLockLookDirection
} // namespace app::classes::types
