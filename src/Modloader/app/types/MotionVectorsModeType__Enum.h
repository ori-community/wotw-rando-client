#pragma once
#include <Modloader/app/structs/MotionVectorsModeType__Enum.h>
#include <Modloader/app/structs/MotionVectorsModeType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MotionVectorsModeType__Enum {
        inline app::MotionVectorsModeType__Enum__Class** type_info() {
            static app::MotionVectorsModeType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MotionVectorsModeType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MotionVectorsModeType__Enum__Class* get_class() {
            return il2cpp::get_class<app::MotionVectorsModeType__Enum__Class>(type_info(), "", "MotionVectorsModeType");
        }
        inline app::MotionVectorsModeType__Enum* create() {
            return il2cpp::create_object<app::MotionVectorsModeType__Enum>(get_class());
        }
    } // namespace MotionVectorsModeType__Enum
} // namespace app::classes::types
