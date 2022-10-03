#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlatformID__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlatformID__Enum__Class** type_info;
        inline app::PlatformID__Enum__Class* get_class() {
            return il2cpp::get_class<app::PlatformID__Enum__Class>(type_info, "System", "PlatformID");
        }
        inline app::PlatformID__Enum* create() {
            return il2cpp::create_object<app::PlatformID__Enum>(get_class());
        }
    } // namespace PlatformID__Enum
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlatformId__Enum {
        namespace {
            app::PlatformId__Enum__Class* type_info_ref = nullptr;
        }
        app::PlatformId__Enum__Class** type_info = &type_info_ref;
        inline app::PlatformId__Enum__Class* get_class() {
            return il2cpp::get_class<app::PlatformId__Enum__Class>(type_info, "", "PlatformId");
        }
        inline app::PlatformId__Enum* create() {
            return il2cpp::create_object<app::PlatformId__Enum>(get_class());
        }
    } // namespace PlatformId__Enum
} // namespace app::classes::types
