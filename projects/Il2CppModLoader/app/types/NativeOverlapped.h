#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NativeOverlapped {
        namespace {
            app::NativeOverlapped__Class* type_info_ref = nullptr;
        }
        app::NativeOverlapped__Class** type_info = &type_info_ref;
        inline app::NativeOverlapped__Class* get_class() {
            return il2cpp::get_class<app::NativeOverlapped__Class>(type_info, "System.Threading", "NativeOverlapped");
        }
        inline app::NativeOverlapped* create() {
            return il2cpp::create_object<app::NativeOverlapped>(get_class());
        }
        inline app::NativeOverlapped__Boxed* box(app::NativeOverlapped value) {
            return il2cpp::box_value<app::NativeOverlapped__Boxed>(get_class(), value);
        }
    } // namespace NativeOverlapped
} // namespace app::classes::types
