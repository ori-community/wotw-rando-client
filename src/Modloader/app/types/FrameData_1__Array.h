#pragma once
#include <Modloader/app/structs/FrameData_1__Array.h>
#include <Modloader/app/structs/FrameData_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrameData_1__Array {
        inline app::FrameData_1__Array__Class** type_info() {
            static app::FrameData_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FrameData_1__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FrameData_1__Array__Class* get_class() {
            return il2cpp::get_class<app::FrameData_1__Array__Class>(type_info(), "", "FrameData[]");
        }
        inline app::FrameData_1__Array* create() {
            return il2cpp::create_object<app::FrameData_1__Array>(get_class());
        }
    } // namespace FrameData_1__Array
} // namespace app::classes::types
