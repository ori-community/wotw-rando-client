#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IUberStateModifierDataVirtualAnimator {
        inline app::IUberStateModifierDataVirtualAnimator__Class** type_info = (app::IUberStateModifierDataVirtualAnimator__Class**)(modloader::win::memory::resolve_rva(0x04738198));
        inline app::IUberStateModifierDataVirtualAnimator__Class* get_class() {
            return il2cpp::get_class<app::IUberStateModifierDataVirtualAnimator__Class>(type_info, "", "IUberStateModifierDataVirtualAnimator");
        }
    } // namespace IUberStateModifierDataVirtualAnimator
} // namespace app::classes::types
