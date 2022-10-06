#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrameData_1 {
        namespace {
            app::FrameData_1__Class* type_info_ref = nullptr;
        }
        app::FrameData_1__Class** type_info = &type_info_ref;
        inline app::FrameData_1__Class* get_class() {
            return il2cpp::get_class<app::FrameData_1__Class>(type_info, "", "FrameData");
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
