#pragma once
#include <Modloader/app/structs/DesiredUberStateVirtualAnimator.h>
#include <Modloader/app/structs/DesiredUberStateVirtualAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesiredUberStateVirtualAnimator {
        inline app::DesiredUberStateVirtualAnimator__Class** type_info() {
            static app::DesiredUberStateVirtualAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DesiredUberStateVirtualAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DesiredUberStateVirtualAnimator__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateVirtualAnimator__Class>(type_info(), "", "DesiredUberStateVirtualAnimator");
        }
        inline app::DesiredUberStateVirtualAnimator* create() {
            return il2cpp::create_object<app::DesiredUberStateVirtualAnimator>(get_class());
        }
    } // namespace DesiredUberStateVirtualAnimator
} // namespace app::classes::types
