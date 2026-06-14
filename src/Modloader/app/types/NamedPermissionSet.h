#pragma once
#include <Modloader/app/structs/NamedPermissionSet.h>
#include <Modloader/app/structs/NamedPermissionSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NamedPermissionSet {
        inline app::NamedPermissionSet__Class** type_info() {
            static app::NamedPermissionSet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NamedPermissionSet__Class**)(modloader::win::memory::resolve_rva(0x04775848));
            }
            return cache;
        }
        inline app::NamedPermissionSet__Class* get_class() {
            return il2cpp::get_class<app::NamedPermissionSet__Class>(type_info(), "System.Security", "NamedPermissionSet");
        }
        inline app::NamedPermissionSet* create() {
            return il2cpp::create_object<app::NamedPermissionSet>(get_class());
        }
    } // namespace NamedPermissionSet
} // namespace app::classes::types
