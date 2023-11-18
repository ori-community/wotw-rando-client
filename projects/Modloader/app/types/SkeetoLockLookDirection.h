#pragma once
#include <Modloader/app/structs/SkeetoLockLookDirection.h>
#include <Modloader/app/structs/SkeetoLockLookDirection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoLockLookDirection {
        inline app::SkeetoLockLookDirection__Class** type_info() {
            static app::SkeetoLockLookDirection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoLockLookDirection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoLockLookDirection__Class* get_class() {
            return il2cpp::get_class<app::SkeetoLockLookDirection__Class>(type_info(), "", "SkeetoLockLookDirection");
        }
        inline app::SkeetoLockLookDirection* create() {
            return il2cpp::create_object<app::SkeetoLockLookDirection>(get_class());
        }
    } // namespace SkeetoLockLookDirection
} // namespace app::classes::types
