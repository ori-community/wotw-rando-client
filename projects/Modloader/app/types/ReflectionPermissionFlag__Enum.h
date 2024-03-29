#pragma once
#include <Modloader/app/structs/ReflectionPermissionFlag__Enum.h>
#include <Modloader/app/structs/ReflectionPermissionFlag__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReflectionPermissionFlag__Enum {
        inline app::ReflectionPermissionFlag__Enum__Class** type_info() {
            static app::ReflectionPermissionFlag__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReflectionPermissionFlag__Enum__Class**)(modloader::win::memory::resolve_rva(0x04795150));
            }
            return cache;
        }
        inline app::ReflectionPermissionFlag__Enum__Class* get_class() {
            return il2cpp::get_class<app::ReflectionPermissionFlag__Enum__Class>(type_info(), "System.Security.Permissions", "ReflectionPermissionFlag");
        }
        inline app::ReflectionPermissionFlag__Enum* create() {
            return il2cpp::create_object<app::ReflectionPermissionFlag__Enum>(get_class());
        }
    } // namespace ReflectionPermissionFlag__Enum
} // namespace app::classes::types
