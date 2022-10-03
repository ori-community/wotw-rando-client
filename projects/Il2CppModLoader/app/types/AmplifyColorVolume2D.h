#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AmplifyColorVolume2D {
        namespace {
            app::AmplifyColorVolume2D__Class* type_info_ref = nullptr;
        }
        app::AmplifyColorVolume2D__Class** type_info = &type_info_ref;
        inline app::AmplifyColorVolume2D__Class* get_class() {
            return il2cpp::get_class<app::AmplifyColorVolume2D__Class>(type_info, "", "AmplifyColorVolume2D");
        }
        inline app::AmplifyColorVolume2D* create() {
            return il2cpp::create_object<app::AmplifyColorVolume2D>(get_class());
        }
    } // namespace AmplifyColorVolume2D
} // namespace app::classes::types
