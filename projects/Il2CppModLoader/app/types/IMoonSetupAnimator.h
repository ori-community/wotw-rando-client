#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMoonSetupAnimator {
        inline app::IMoonSetupAnimator__Class** type_info = (app::IMoonSetupAnimator__Class**)(modloader::win::memory::resolve_rva(0x0475CF80));
        inline app::IMoonSetupAnimator__Class* get_class() {
            return il2cpp::get_class<app::IMoonSetupAnimator__Class>(type_info, "", "IMoonSetupAnimator");
        }
    } // namespace IMoonSetupAnimator
} // namespace app::classes::types
