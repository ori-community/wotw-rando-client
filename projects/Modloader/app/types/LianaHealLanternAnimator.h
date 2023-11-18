#pragma once
#include <Modloader/app/structs/LianaHealLanternAnimator.h>
#include <Modloader/app/structs/LianaHealLanternAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LianaHealLanternAnimator {
        inline app::LianaHealLanternAnimator__Class** type_info() {
            static app::LianaHealLanternAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LianaHealLanternAnimator__Class**)(modloader::win::memory::resolve_rva(0x047164A8));
            }
            return cache;
        }
        inline app::LianaHealLanternAnimator__Class* get_class() {
            return il2cpp::get_class<app::LianaHealLanternAnimator__Class>(type_info(), "", "LianaHealLanternAnimator");
        }
        inline app::LianaHealLanternAnimator* create() {
            return il2cpp::create_object<app::LianaHealLanternAnimator>(get_class());
        }
    } // namespace LianaHealLanternAnimator
} // namespace app::classes::types
