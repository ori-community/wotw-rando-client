#pragma once
#include <Modloader/app/structs/IAnimationMontageEventHandler.h>
#include <Modloader/app/structs/IAnimationMontageEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IAnimationMontageEventHandler {
        inline app::IAnimationMontageEventHandler__Class** type_info() {
            static app::IAnimationMontageEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IAnimationMontageEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04746570));
            }
            return cache;
        }
        inline app::IAnimationMontageEventHandler__Class* get_class() {
            return il2cpp::get_class<app::IAnimationMontageEventHandler__Class>(type_info(), "Moon", "IAnimationMontageEventHandler");
        }
    } // namespace IAnimationMontageEventHandler
} // namespace app::classes::types
