#pragma once
#include <Modloader/app/structs/LegacyColorFlashAnimator.h>
#include <Modloader/app/structs/LegacyColorFlashAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyColorFlashAnimator {
        inline app::LegacyColorFlashAnimator__Class** type_info() {
            static app::LegacyColorFlashAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LegacyColorFlashAnimator__Class**)(modloader::win::memory::resolve_rva(0x04709B30));
            }
            return cache;
        }
        inline app::LegacyColorFlashAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyColorFlashAnimator__Class>(type_info(), "", "LegacyColorFlashAnimator");
        }
        inline app::LegacyColorFlashAnimator* create() {
            return il2cpp::create_object<app::LegacyColorFlashAnimator>(get_class());
        }
    } // namespace LegacyColorFlashAnimator
} // namespace app::classes::types
