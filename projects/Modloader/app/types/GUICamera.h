#pragma once
#include <Modloader/app/structs/GUICamera.h>
#include <Modloader/app/structs/GUICamera__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUICamera {
        inline app::GUICamera__Class** type_info() {
            static app::GUICamera__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GUICamera__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GUICamera__Class* get_class() {
            return il2cpp::get_class<app::GUICamera__Class>(type_info(), "", "GUICamera");
        }
        inline app::GUICamera* create() {
            return il2cpp::create_object<app::GUICamera>(get_class());
        }
    } // namespace GUICamera
} // namespace app::classes::types
