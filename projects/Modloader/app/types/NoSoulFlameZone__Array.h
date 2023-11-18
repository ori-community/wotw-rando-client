#pragma once
#include <Modloader/app/structs/NoSoulFlameZone__Array.h>
#include <Modloader/app/structs/NoSoulFlameZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NoSoulFlameZone__Array {
        inline app::NoSoulFlameZone__Array__Class** type_info() {
            static app::NoSoulFlameZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NoSoulFlameZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NoSoulFlameZone__Array__Class* get_class() {
            return il2cpp::get_class<app::NoSoulFlameZone__Array__Class>(type_info(), "", "NoSoulFlameZone[]");
        }
        inline app::NoSoulFlameZone__Array* create() {
            return il2cpp::create_object<app::NoSoulFlameZone__Array>(get_class());
        }
    } // namespace NoSoulFlameZone__Array
} // namespace app::classes::types
