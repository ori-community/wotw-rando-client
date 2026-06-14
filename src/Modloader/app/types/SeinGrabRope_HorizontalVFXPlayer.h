#pragma once
#include <Modloader/app/structs/SeinGrabRope_HorizontalVFXPlayer.h>
#include <Modloader/app/structs/SeinGrabRope_HorizontalVFXPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGrabRope_HorizontalVFXPlayer {
        inline app::SeinGrabRope_HorizontalVFXPlayer__Class** type_info() {
            static app::SeinGrabRope_HorizontalVFXPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinGrabRope_HorizontalVFXPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinGrabRope_HorizontalVFXPlayer__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGrabRope_HorizontalVFXPlayer__Class>(type_info(), "", "SeinGrabRope", "HorizontalVFXPlayer");
        }
        inline app::SeinGrabRope_HorizontalVFXPlayer* create() {
            return il2cpp::create_object<app::SeinGrabRope_HorizontalVFXPlayer>(get_class());
        }
    } // namespace SeinGrabRope_HorizontalVFXPlayer
} // namespace app::classes::types
