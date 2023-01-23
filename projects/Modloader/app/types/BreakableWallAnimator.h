#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BreakableWallAnimator__Class.h>
#include <Modloader/app/structs/BreakableWallAnimator.h>

namespace app::classes::types {
    namespace BreakableWallAnimator {
        inline app::BreakableWallAnimator__Class** type_info = (app::BreakableWallAnimator__Class**)(modloader::win::memory::resolve_rva(0x0478AD88));
        inline app::BreakableWallAnimator__Class* get_class() {
            return il2cpp::get_class<app::BreakableWallAnimator__Class>(type_info, "", "BreakableWallAnimator");
        }
        inline app::BreakableWallAnimator* create() {
            return il2cpp::create_object<app::BreakableWallAnimator>(get_class());
        }
    } // namespace BreakableWallAnimator
} // namespace app::classes::types
