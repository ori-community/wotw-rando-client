#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalUserChangeType__Enum {
        inline app::XalUserChangeType__Enum__Class** type_info = (app::XalUserChangeType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04702B08));
        inline app::XalUserChangeType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XalUserChangeType__Enum__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalUserChangeType");
        }
        inline app::XalUserChangeType__Enum* create() {
            return il2cpp::create_object<app::XalUserChangeType__Enum>(get_class());
        }
    } // namespace XalUserChangeType__Enum
} // namespace app::classes::types
