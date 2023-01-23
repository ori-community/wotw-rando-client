#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LianaHealLanternAnimator__Class.h>
#include <Modloader/app/structs/LianaHealLanternAnimator.h>

namespace app::classes::types {
    namespace LianaHealLanternAnimator {
        inline app::LianaHealLanternAnimator__Class** type_info = (app::LianaHealLanternAnimator__Class**)(modloader::win::memory::resolve_rva(0x047164A8));
        inline app::LianaHealLanternAnimator__Class* get_class() {
            return il2cpp::get_class<app::LianaHealLanternAnimator__Class>(type_info, "", "LianaHealLanternAnimator");
        }
        inline app::LianaHealLanternAnimator* create() {
            return il2cpp::create_object<app::LianaHealLanternAnimator>(get_class());
        }
    } // namespace LianaHealLanternAnimator
} // namespace app::classes::types
