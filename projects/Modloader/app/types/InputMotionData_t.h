#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InputMotionData_t__Class.h>
#include <Modloader/app/structs/InputMotionData_t.h>
#include <Modloader/app/structs/InputMotionData_t__Boxed.h>

namespace app::classes::types {
    namespace InputMotionData_t {
        namespace {
            inline app::InputMotionData_t__Class* type_info_ref = nullptr;
        }
        inline app::InputMotionData_t__Class** type_info = &type_info_ref;
        inline app::InputMotionData_t__Class* get_class() {
            return il2cpp::get_class<app::InputMotionData_t__Class>(type_info, "Steamworks", "InputMotionData_t");
        }
        inline app::InputMotionData_t* create() {
            return il2cpp::create_object<app::InputMotionData_t>(get_class());
        }
        inline app::InputMotionData_t__Boxed* box(app::InputMotionData_t value) {
            return il2cpp::box_value<app::InputMotionData_t__Boxed>(get_class(), value);
        }
    } // namespace InputMotionData_t
} // namespace app::classes::types
