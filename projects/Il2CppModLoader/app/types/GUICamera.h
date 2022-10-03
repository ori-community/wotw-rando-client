#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUICamera {
        namespace {
            app::GUICamera__Class* type_info_ref = nullptr;
        }
        app::GUICamera__Class** type_info = &type_info_ref;
        inline app::GUICamera__Class* get_class() {
            return il2cpp::get_class<app::GUICamera__Class>(type_info, "", "GUICamera");
        }
        inline app::GUICamera* create() {
            return il2cpp::create_object<app::GUICamera>(get_class());
        }
    } // namespace GUICamera
} // namespace app::classes::types
