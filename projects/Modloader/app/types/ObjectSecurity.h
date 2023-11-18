#pragma once
#include <Modloader/app/structs/ObjectSecurity.h>
#include <Modloader/app/structs/ObjectSecurity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectSecurity {
        inline app::ObjectSecurity__Class** type_info() {
            static app::ObjectSecurity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectSecurity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectSecurity__Class* get_class() {
            return il2cpp::get_class<app::ObjectSecurity__Class>(type_info(), "System.Security.AccessControl", "ObjectSecurity");
        }
        inline app::ObjectSecurity* create() {
            return il2cpp::create_object<app::ObjectSecurity>(get_class());
        }
    } // namespace ObjectSecurity
} // namespace app::classes::types
