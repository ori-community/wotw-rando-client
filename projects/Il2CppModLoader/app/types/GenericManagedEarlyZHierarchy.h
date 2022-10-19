#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GenericManagedEarlyZHierarchy {
        namespace {
            inline app::GenericManagedEarlyZHierarchy__Class* type_info_ref = nullptr;
        }
        inline app::GenericManagedEarlyZHierarchy__Class** type_info = &type_info_ref;
        inline app::GenericManagedEarlyZHierarchy__Class* get_class() {
            return il2cpp::get_class<app::GenericManagedEarlyZHierarchy__Class>(type_info, "", "GenericManagedEarlyZHierarchy");
        }
        inline app::GenericManagedEarlyZHierarchy* create() {
            return il2cpp::create_object<app::GenericManagedEarlyZHierarchy>(get_class());
        }
    } // namespace GenericManagedEarlyZHierarchy
} // namespace app::classes::types
