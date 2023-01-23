#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MotionVectorsModeType__Enum__Class.h>
#include <Modloader/app/structs/MotionVectorsModeType__Enum.h>

namespace app::classes::types {
    namespace MotionVectorsModeType__Enum {
        namespace {
            inline app::MotionVectorsModeType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MotionVectorsModeType__Enum__Class** type_info = &type_info_ref;
        inline app::MotionVectorsModeType__Enum__Class* get_class() {
            return il2cpp::get_class<app::MotionVectorsModeType__Enum__Class>(type_info, "", "MotionVectorsModeType");
        }
        inline app::MotionVectorsModeType__Enum* create() {
            return il2cpp::create_object<app::MotionVectorsModeType__Enum>(get_class());
        }
    } // namespace MotionVectorsModeType__Enum
} // namespace app::classes::types
