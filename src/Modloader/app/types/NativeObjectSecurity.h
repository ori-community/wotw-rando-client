#pragma once
#include <Modloader/app/structs/NativeObjectSecurity.h>
#include <Modloader/app/structs/NativeObjectSecurity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeObjectSecurity {
        inline app::NativeObjectSecurity__Class** type_info() {
            static app::NativeObjectSecurity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeObjectSecurity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeObjectSecurity__Class* get_class() {
            return il2cpp::get_class<app::NativeObjectSecurity__Class>(type_info(), "System.Security.AccessControl", "NativeObjectSecurity");
        }
        inline app::NativeObjectSecurity* create() {
            return il2cpp::create_object<app::NativeObjectSecurity>(get_class());
        }
    } // namespace NativeObjectSecurity
} // namespace app::classes::types
