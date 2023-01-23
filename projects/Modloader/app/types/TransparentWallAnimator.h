#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TransparentWallAnimator__Class.h>
#include <Modloader/app/structs/TransparentWallAnimator.h>

namespace app::classes::types {
    namespace TransparentWallAnimator {
        inline app::TransparentWallAnimator__Class** type_info = (app::TransparentWallAnimator__Class**)(modloader::win::memory::resolve_rva(0x04722008));
        inline app::TransparentWallAnimator__Class* get_class() {
            return il2cpp::get_class<app::TransparentWallAnimator__Class>(type_info, "", "TransparentWallAnimator");
        }
        inline app::TransparentWallAnimator* create() {
            return il2cpp::create_object<app::TransparentWallAnimator>(get_class());
        }
    } // namespace TransparentWallAnimator
} // namespace app::classes::types
