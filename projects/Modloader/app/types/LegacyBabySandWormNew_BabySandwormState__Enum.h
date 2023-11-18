#pragma once
#include <Modloader/app/structs/LegacyBabySandWormNew_BabySandwormState__Enum.h>
#include <Modloader/app/structs/LegacyBabySandWormNew_BabySandwormState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyBabySandWormNew_BabySandwormState__Enum {
        inline app::LegacyBabySandWormNew_BabySandwormState__Enum__Class** type_info() {
            static app::LegacyBabySandWormNew_BabySandwormState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyBabySandWormNew_BabySandwormState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyBabySandWormNew_BabySandwormState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyBabySandWormNew_BabySandwormState__Enum__Class>(type_info(), "", "LegacyBabySandWormNew", "BabySandwormState");
        }
        inline app::LegacyBabySandWormNew_BabySandwormState__Enum* create() {
            return il2cpp::create_object<app::LegacyBabySandWormNew_BabySandwormState__Enum>(get_class());
        }
    } // namespace LegacyBabySandWormNew_BabySandwormState__Enum
} // namespace app::classes::types
