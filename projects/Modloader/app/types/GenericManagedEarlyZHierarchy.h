#pragma once
#include <Modloader/app/structs/GenericManagedEarlyZHierarchy.h>
#include <Modloader/app/structs/GenericManagedEarlyZHierarchy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericManagedEarlyZHierarchy {
        inline app::GenericManagedEarlyZHierarchy__Class** type_info() {
            static app::GenericManagedEarlyZHierarchy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GenericManagedEarlyZHierarchy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GenericManagedEarlyZHierarchy__Class* get_class() {
            return il2cpp::get_class<app::GenericManagedEarlyZHierarchy__Class>(type_info(), "", "GenericManagedEarlyZHierarchy");
        }
        inline app::GenericManagedEarlyZHierarchy* create() {
            return il2cpp::create_object<app::GenericManagedEarlyZHierarchy>(get_class());
        }
    } // namespace GenericManagedEarlyZHierarchy
} // namespace app::classes::types
