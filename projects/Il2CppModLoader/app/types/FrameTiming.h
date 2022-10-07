#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrameTiming {
        namespace {
            app::FrameTiming__Class* type_info_ref = nullptr;
        }
        app::FrameTiming__Class** type_info = &type_info_ref;
        inline app::FrameTiming__Class* get_class() {
            return il2cpp::get_class<app::FrameTiming__Class>(type_info, "UnityEngine", "FrameTiming");
        }
        inline app::FrameTiming* create() {
            return il2cpp::create_object<app::FrameTiming>(get_class());
        }
        inline app::FrameTiming__Boxed* box(app::FrameTiming value) {
            return il2cpp::box_value<app::FrameTiming__Boxed>(get_class(), value);
        }
        inline app::FrameTiming__Array* create_array(int size) {
            return il2cpp::array_new<app::FrameTiming__Array>(get_class(), size);
        }
        inline app::FrameTiming__Array* create_array(const std::vector<app::FrameTiming>& items) {
            return il2cpp::array_new<app::FrameTiming__Array>(get_class(), items);
        }
    } // namespace FrameTiming
} // namespace app::classes::types
