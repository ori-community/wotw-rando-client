#pragma once
#include <Modloader/app/structs/StandardOleMarshalObject.h>
#include <Modloader/app/structs/StandardOleMarshalObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StandardOleMarshalObject {
        inline app::StandardOleMarshalObject__Class** type_info() {
            static app::StandardOleMarshalObject__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StandardOleMarshalObject__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StandardOleMarshalObject__Class* get_class() {
            return il2cpp::get_class<app::StandardOleMarshalObject__Class>(type_info(), "System.Runtime.InteropServices", "StandardOleMarshalObject");
        }
        inline app::StandardOleMarshalObject* create() {
            return il2cpp::create_object<app::StandardOleMarshalObject>(get_class());
        }
    } // namespace StandardOleMarshalObject
} // namespace app::classes::types
