#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlatformBehaviour {
        namespace {
            app::PlatformBehaviour__Class* type_info_ref = nullptr;
        }
        app::PlatformBehaviour__Class** type_info = &type_info_ref;
        inline app::PlatformBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PlatformBehaviour__Class>(type_info, "", "PlatformBehaviour");
        }
        inline app::PlatformBehaviour* create() {
            return il2cpp::create_object<app::PlatformBehaviour>(get_class());
        }
    } // namespace PlatformBehaviour
} // namespace app::classes::types
