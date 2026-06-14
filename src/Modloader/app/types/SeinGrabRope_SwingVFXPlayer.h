#pragma once
#include <Modloader/app/structs/SeinGrabRope_SwingVFXPlayer.h>
#include <Modloader/app/structs/SeinGrabRope_SwingVFXPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGrabRope_SwingVFXPlayer {
        inline app::SeinGrabRope_SwingVFXPlayer__Class** type_info() {
            static app::SeinGrabRope_SwingVFXPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinGrabRope_SwingVFXPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinGrabRope_SwingVFXPlayer__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGrabRope_SwingVFXPlayer__Class>(type_info(), "", "SeinGrabRope", "SwingVFXPlayer");
        }
        inline app::SeinGrabRope_SwingVFXPlayer* create() {
            return il2cpp::create_object<app::SeinGrabRope_SwingVFXPlayer>(get_class());
        }
    } // namespace SeinGrabRope_SwingVFXPlayer
} // namespace app::classes::types
