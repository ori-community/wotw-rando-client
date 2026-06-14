#pragma once
#include <Modloader/app/structs/PermissionSet.h>
#include <Modloader/app/structs/PermissionSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PermissionSet {
        inline app::PermissionSet__Class** type_info() {
            static app::PermissionSet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PermissionSet__Class**)(modloader::win::memory::resolve_rva(0x04728F90));
            }
            return cache;
        }
        inline app::PermissionSet__Class* get_class() {
            return il2cpp::get_class<app::PermissionSet__Class>(type_info(), "System.Security", "PermissionSet");
        }
        inline app::PermissionSet* create() {
            return il2cpp::create_object<app::PermissionSet>(get_class());
        }
    } // namespace PermissionSet
} // namespace app::classes::types
