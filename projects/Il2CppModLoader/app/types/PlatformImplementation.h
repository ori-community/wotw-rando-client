#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlatformImplementation {
        namespace {
            app::PlatformImplementation__Class* type_info_ref = nullptr;
        }
        app::PlatformImplementation__Class** type_info = &type_info_ref;
        inline app::PlatformImplementation__Class* get_class() {
            return il2cpp::get_class<app::PlatformImplementation__Class>(type_info, "Moon", "PlatformImplementation");
        }
        inline app::PlatformImplementation* create() {
            return il2cpp::create_object<app::PlatformImplementation>(get_class());
        }
    } // namespace PlatformImplementation
} // namespace app::classes::types
