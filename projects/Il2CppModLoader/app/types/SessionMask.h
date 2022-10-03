#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SessionMask {
        namespace {
            app::SessionMask__Class* type_info_ref = nullptr;
        }
        app::SessionMask__Class** type_info = &type_info_ref;
        inline app::SessionMask__Class* get_class() {
            return il2cpp::get_class<app::SessionMask__Class>(type_info, "System.Diagnostics.Tracing", "SessionMask");
        }
        inline app::SessionMask* create() {
            return il2cpp::create_object<app::SessionMask>(get_class());
        }
        inline app::SessionMask__Boxed* box(app::SessionMask value) {
            return il2cpp::box_value<app::SessionMask__Boxed>(get_class(), value);
        }
    } // namespace SessionMask
} // namespace app::classes::types
