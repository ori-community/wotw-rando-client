#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CaptureCollection {
        namespace {
            app::CaptureCollection__Class* type_info_ref = nullptr;
        }
        app::CaptureCollection__Class** type_info = &type_info_ref;
        inline app::CaptureCollection__Class* get_class() {
            return il2cpp::get_class<app::CaptureCollection__Class>(type_info, "System.Text.RegularExpressions", "CaptureCollection");
        }
        inline app::CaptureCollection* create() {
            return il2cpp::create_object<app::CaptureCollection>(get_class());
        }
    } // namespace CaptureCollection
} // namespace app::classes::types
