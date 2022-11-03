#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReplayCameraAnimator {
        inline app::ReplayCameraAnimator__Class** type_info = (app::ReplayCameraAnimator__Class**)(modloader::win::memory::resolve_rva(0x0478B638));
        inline app::ReplayCameraAnimator__Class* get_class() {
            return il2cpp::get_class<app::ReplayCameraAnimator__Class>(type_info, "Moon.Timeline", "ReplayCameraAnimator");
        }
        inline app::ReplayCameraAnimator* create() {
            return il2cpp::create_object<app::ReplayCameraAnimator>(get_class());
        }
    } // namespace ReplayCameraAnimator
} // namespace app::classes::types
