#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BodyTilt {
        namespace {
            app::BodyTilt__Class* type_info_ref = nullptr;
        }
        app::BodyTilt__Class** type_info = &type_info_ref;
        inline app::BodyTilt__Class* get_class() {
            return il2cpp::get_class<app::BodyTilt__Class>(type_info, "RootMotion.FinalIK", "BodyTilt");
        }
        inline app::BodyTilt* create() {
            return il2cpp::create_object<app::BodyTilt>(get_class());
        }
    } // namespace BodyTilt
} // namespace app::classes::types
