#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IAnimationMontageEventHandler {
        inline app::IAnimationMontageEventHandler__Class** type_info = (app::IAnimationMontageEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04746570));
        inline app::IAnimationMontageEventHandler__Class* get_class() {
            return il2cpp::get_class<app::IAnimationMontageEventHandler__Class>(type_info, "Moon", "IAnimationMontageEventHandler");
        }
    } // namespace IAnimationMontageEventHandler
} // namespace app::classes::types
