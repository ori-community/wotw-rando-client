#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SnapTrapHookAnimator__Class.h>
#include <Modloader/app/structs/SnapTrapHookAnimator.h>

namespace app::classes::types {
    namespace SnapTrapHookAnimator {
        inline app::SnapTrapHookAnimator__Class** type_info = (app::SnapTrapHookAnimator__Class**)(modloader::win::memory::resolve_rva(0x04766A30));
        inline app::SnapTrapHookAnimator__Class* get_class() {
            return il2cpp::get_class<app::SnapTrapHookAnimator__Class>(type_info, "", "SnapTrapHookAnimator");
        }
        inline app::SnapTrapHookAnimator* create() {
            return il2cpp::create_object<app::SnapTrapHookAnimator>(get_class());
        }
    } // namespace SnapTrapHookAnimator
} // namespace app::classes::types
