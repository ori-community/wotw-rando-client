#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GuidAttribute {
        namespace {
            app::GuidAttribute__Class* type_info_ref = nullptr;
        }
        app::GuidAttribute__Class** type_info = &type_info_ref;
        inline app::GuidAttribute__Class* get_class() {
            return il2cpp::get_class<app::GuidAttribute__Class>(type_info, "System.Runtime.InteropServices", "GuidAttribute");
        }
        inline app::GuidAttribute* create() {
            return il2cpp::create_object<app::GuidAttribute>(get_class());
        }
    } // namespace GuidAttribute
} // namespace app::classes::types
