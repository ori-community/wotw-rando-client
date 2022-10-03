#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpinWait {
        namespace {
            app::SpinWait__Class* type_info_ref = nullptr;
        }
        app::SpinWait__Class** type_info = &type_info_ref;
        inline app::SpinWait__Class* get_class() {
            return il2cpp::get_class<app::SpinWait__Class>(type_info, "System.Threading", "SpinWait");
        }
        inline app::SpinWait* create() {
            return il2cpp::create_object<app::SpinWait>(get_class());
        }
        inline app::SpinWait__Boxed* box(app::SpinWait value) {
            return il2cpp::box_value<app::SpinWait__Boxed>(get_class(), value);
        }
    } // namespace SpinWait
} // namespace app::classes::types
