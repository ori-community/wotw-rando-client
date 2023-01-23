#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NativeObjectSecurity__Class.h>
#include <Modloader/app/structs/NativeObjectSecurity.h>

namespace app::classes::types {
    namespace NativeObjectSecurity {
        namespace {
            inline app::NativeObjectSecurity__Class* type_info_ref = nullptr;
        }
        inline app::NativeObjectSecurity__Class** type_info = &type_info_ref;
        inline app::NativeObjectSecurity__Class* get_class() {
            return il2cpp::get_class<app::NativeObjectSecurity__Class>(type_info, "System.Security.AccessControl", "NativeObjectSecurity");
        }
        inline app::NativeObjectSecurity* create() {
            return il2cpp::create_object<app::NativeObjectSecurity>(get_class());
        }
    } // namespace NativeObjectSecurity
} // namespace app::classes::types
