#pragma once
#include <Modloader/app/structs/SpriteBone.h>
#include <Modloader/app/structs/SpriteBone__Boxed.h>
#include <Modloader/app/structs/SpriteBone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteBone {
        inline app::SpriteBone__Class** type_info() {
            static app::SpriteBone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpriteBone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpriteBone__Class* get_class() {
            return il2cpp::get_class<app::SpriteBone__Class>(type_info(), "UnityEngine.Experimental.U2D", "SpriteBone");
        }
        inline app::SpriteBone* create() {
            return il2cpp::create_object<app::SpriteBone>(get_class());
        }
        inline app::SpriteBone__Boxed* box(app::SpriteBone value) {
            return il2cpp::box_value<app::SpriteBone__Boxed>(get_class(), value);
        }
    } // namespace SpriteBone
} // namespace app::classes::types
