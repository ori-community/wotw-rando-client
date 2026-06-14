#pragma once
#include <Modloader/app/structs/EmotionType__Enum.h>
#include <Modloader/app/structs/EmotionType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EmotionType__Enum {
        inline app::EmotionType__Enum__Class** type_info() {
            static app::EmotionType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EmotionType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EmotionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EmotionType__Enum__Class>(type_info(), "", "EmotionType");
        }
        inline app::EmotionType__Enum* create() {
            return il2cpp::create_object<app::EmotionType__Enum>(get_class());
        }
    } // namespace EmotionType__Enum
} // namespace app::classes::types
