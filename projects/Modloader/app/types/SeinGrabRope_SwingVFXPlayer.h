#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinGrabRope_SwingVFXPlayer {
        namespace {
            inline app::SeinGrabRope_SwingVFXPlayer__Class* type_info_ref = nullptr;
        }
        inline app::SeinGrabRope_SwingVFXPlayer__Class** type_info = &type_info_ref;
        inline app::SeinGrabRope_SwingVFXPlayer__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGrabRope_SwingVFXPlayer__Class>(type_info, "", "SeinGrabRope", "SwingVFXPlayer");
        }
        inline app::SeinGrabRope_SwingVFXPlayer* create() {
            return il2cpp::create_object<app::SeinGrabRope_SwingVFXPlayer>(get_class());
        }
    } // namespace SeinGrabRope_SwingVFXPlayer
} // namespace app::classes::types
