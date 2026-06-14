#pragma once
#include <Modloader/app/structs/IUberStateModifierDataVirtualAnimator.h>
#include <Modloader/app/structs/IUberStateModifierDataVirtualAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IUberStateModifierDataVirtualAnimator {
        inline app::IUberStateModifierDataVirtualAnimator__Class** type_info() {
            static app::IUberStateModifierDataVirtualAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IUberStateModifierDataVirtualAnimator__Class**)(modloader::win::memory::resolve_rva(0x04738198));
            }
            return cache;
        }
        inline app::IUberStateModifierDataVirtualAnimator__Class* get_class() {
            return il2cpp::get_class<app::IUberStateModifierDataVirtualAnimator__Class>(type_info(), "", "IUberStateModifierDataVirtualAnimator");
        }
    } // namespace IUberStateModifierDataVirtualAnimator
} // namespace app::classes::types
