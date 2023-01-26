#pragma once
#include <Modloader/app/structs/OneWayAttribute.h>
#include <Modloader/app/structs/OneWayAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OneWayAttribute {
        inline app::OneWayAttribute__Class** type_info() {
            static app::OneWayAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OneWayAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OneWayAttribute__Class* get_class() {
            return il2cpp::get_class<app::OneWayAttribute__Class>(type_info(), "System.Runtime.Remoting.Messaging", "OneWayAttribute");
        }
        inline app::OneWayAttribute* create() {
            return il2cpp::create_object<app::OneWayAttribute>(get_class());
        }
    } // namespace OneWayAttribute
} // namespace app::classes::types
