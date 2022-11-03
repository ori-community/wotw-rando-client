#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StandardOleMarshalObject {
        namespace {
            inline app::StandardOleMarshalObject__Class* type_info_ref = nullptr;
        }
        inline app::StandardOleMarshalObject__Class** type_info = &type_info_ref;
        inline app::StandardOleMarshalObject__Class* get_class() {
            return il2cpp::get_class<app::StandardOleMarshalObject__Class>(type_info, "System.Runtime.InteropServices", "StandardOleMarshalObject");
        }
        inline app::StandardOleMarshalObject* create() {
            return il2cpp::create_object<app::StandardOleMarshalObject>(get_class());
        }
    } // namespace StandardOleMarshalObject
} // namespace app::classes::types
