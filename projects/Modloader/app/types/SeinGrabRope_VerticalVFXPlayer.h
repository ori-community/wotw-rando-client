#pragma once
#include <Modloader/app/structs/SeinGrabRope_VerticalVFXPlayer.h>
#include <Modloader/app/structs/SeinGrabRope_VerticalVFXPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGrabRope_VerticalVFXPlayer {
        inline app::SeinGrabRope_VerticalVFXPlayer__Class** type_info() {
            static app::SeinGrabRope_VerticalVFXPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinGrabRope_VerticalVFXPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinGrabRope_VerticalVFXPlayer__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGrabRope_VerticalVFXPlayer__Class>(type_info(), "", "SeinGrabRope", "VerticalVFXPlayer");
        }
        inline app::SeinGrabRope_VerticalVFXPlayer* create() {
            return il2cpp::create_object<app::SeinGrabRope_VerticalVFXPlayer>(get_class());
        }
    } // namespace SeinGrabRope_VerticalVFXPlayer
} // namespace app::classes::types
