#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinGrabRope_HorizontalVFXPlayer__Class.h>
#include <Modloader/app/structs/SeinGrabRope_HorizontalVFXPlayer.h>

namespace app::classes::types {
    namespace SeinGrabRope_HorizontalVFXPlayer {
        namespace {
            inline app::SeinGrabRope_HorizontalVFXPlayer__Class* type_info_ref = nullptr;
        }
        inline app::SeinGrabRope_HorizontalVFXPlayer__Class** type_info = &type_info_ref;
        inline app::SeinGrabRope_HorizontalVFXPlayer__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGrabRope_HorizontalVFXPlayer__Class>(type_info, "", "SeinGrabRope", "HorizontalVFXPlayer");
        }
        inline app::SeinGrabRope_HorizontalVFXPlayer* create() {
            return il2cpp::create_object<app::SeinGrabRope_HorizontalVFXPlayer>(get_class());
        }
    } // namespace SeinGrabRope_HorizontalVFXPlayer
} // namespace app::classes::types
