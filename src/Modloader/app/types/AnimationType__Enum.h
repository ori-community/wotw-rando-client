#pragma once
#include <Modloader/app/structs/AnimationType__Enum.h>
#include <Modloader/app/structs/AnimationType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationType__Enum {
        inline app::AnimationType__Enum__Class** type_info() {
            static app::AnimationType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AnimationType__Enum__Class>(type_info(), "Moon", "AnimationType");
        }
        inline app::AnimationType__Enum* create() {
            return il2cpp::create_object<app::AnimationType__Enum>(get_class());
        }
    } // namespace AnimationType__Enum
} // namespace app::classes::types
