#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StandardOleMarshalObject {
        namespace {
            app::StandardOleMarshalObject__Class* type_info_ref = nullptr;
        }
        app::StandardOleMarshalObject__Class** type_info = &type_info_ref;
        inline app::StandardOleMarshalObject__Class* get_class() {
            return il2cpp::get_class<app::StandardOleMarshalObject__Class>(type_info, "System.Runtime.InteropServices", "StandardOleMarshalObject");
        }
        inline app::StandardOleMarshalObject* create() {
            return il2cpp::create_object<app::StandardOleMarshalObject>(get_class());
        }
    } // namespace StandardOleMarshalObject
} // namespace app::classes::types
