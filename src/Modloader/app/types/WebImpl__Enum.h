#pragma once
#include <Modloader/app/structs/WebImpl__Enum.h>
#include <Modloader/app/structs/WebImpl__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebImpl__Enum {
        inline app::WebImpl__Enum__Class** type_info() {
            static app::WebImpl__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WebImpl__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WebImpl__Enum__Class* get_class() {
            return il2cpp::get_class<app::WebImpl__Enum__Class>(type_info(), "Moon.Telemetry.Web", "WebImpl");
        }
        inline app::WebImpl__Enum* create() {
            return il2cpp::create_object<app::WebImpl__Enum>(get_class());
        }
    } // namespace WebImpl__Enum
} // namespace app::classes::types
