#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SessionMask__Class.h>
#include <Modloader/app/structs/SessionMask.h>
#include <Modloader/app/structs/SessionMask__Boxed.h>

namespace app::classes::types {
    namespace SessionMask {
        namespace {
            inline app::SessionMask__Class* type_info_ref = nullptr;
        }
        inline app::SessionMask__Class** type_info = &type_info_ref;
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
