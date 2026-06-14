#pragma once
#include <Modloader/app/structs/SessionMask.h>
#include <Modloader/app/structs/SessionMask__Boxed.h>
#include <Modloader/app/structs/SessionMask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SessionMask {
        inline app::SessionMask__Class** type_info() {
            static app::SessionMask__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SessionMask__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SessionMask__Class* get_class() {
            return il2cpp::get_class<app::SessionMask__Class>(type_info(), "System.Diagnostics.Tracing", "SessionMask");
        }
        inline app::SessionMask* create() {
            return il2cpp::create_object<app::SessionMask>(get_class());
        }
        inline app::SessionMask__Boxed* box(app::SessionMask value) {
            return il2cpp::box_value<app::SessionMask__Boxed>(get_class(), value);
        }
    } // namespace SessionMask
} // namespace app::classes::types
