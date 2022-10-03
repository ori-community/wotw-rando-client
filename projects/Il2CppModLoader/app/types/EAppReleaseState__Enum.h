#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EAppReleaseState__Enum {
        namespace {
            app::EAppReleaseState__Enum__Class* type_info_ref = nullptr;
        }
        app::EAppReleaseState__Enum__Class** type_info = &type_info_ref;
        inline app::EAppReleaseState__Enum__Class* get_class() {
            return il2cpp::get_class<app::EAppReleaseState__Enum__Class>(type_info, "Steamworks", "EAppReleaseState");
        }
        inline app::EAppReleaseState__Enum* create() {
            return il2cpp::create_object<app::EAppReleaseState__Enum>(get_class());
        }
    } // namespace EAppReleaseState__Enum
} // namespace app::classes::types
