#pragma once
#include <Modloader/app/structs/FrameData_1.h>
#include <Modloader/app/structs/FrameData_1__Array.h>
#include <Modloader/app/structs/FrameData_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrameData_1 {
        inline app::FrameData_1__Class** type_info() {
            static app::FrameData_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FrameData_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FrameData_1__Class* get_class() {
            return il2cpp::get_class<app::FrameData_1__Class>(type_info(), "", "FrameData");
        }
        inline app::FrameData_1* create() {
            return il2cpp::create_object<app::FrameData_1>(get_class());
        }
        inline app::FrameData_1__Array* create_array(int size) {
            return il2cpp::array_new<app::FrameData_1__Array>(get_class(), size);
        }
        inline app::FrameData_1__Array* create_array(const std::vector<app::FrameData_1*>& items) {
            return il2cpp::array_new<app::FrameData_1__Array>(get_class(), items);
        }
    } // namespace FrameData_1
} // namespace app::classes::types
