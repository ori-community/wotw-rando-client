#pragma once
#include <Modloader/app/structs/EAppReleaseState__Enum.h>
#include <Modloader/app/structs/EAppReleaseState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EAppReleaseState__Enum {
        inline app::EAppReleaseState__Enum__Class** type_info() {
            static app::EAppReleaseState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EAppReleaseState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EAppReleaseState__Enum__Class* get_class() {
            return il2cpp::get_class<app::EAppReleaseState__Enum__Class>(type_info(), "Steamworks", "EAppReleaseState");
        }
        inline app::EAppReleaseState__Enum* create() {
            return il2cpp::create_object<app::EAppReleaseState__Enum>(get_class());
        }
    } // namespace EAppReleaseState__Enum
} // namespace app::classes::types
