#pragma once
#include <Modloader/app/structs/ShowSeinUIAnimator.h>
#include <Modloader/app/structs/ShowSeinUIAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowSeinUIAnimator {
        inline app::ShowSeinUIAnimator__Class** type_info() {
            static app::ShowSeinUIAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowSeinUIAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowSeinUIAnimator__Class* get_class() {
            return il2cpp::get_class<app::ShowSeinUIAnimator__Class>(type_info(), "", "ShowSeinUIAnimator");
        }
        inline app::ShowSeinUIAnimator* create() {
            return il2cpp::create_object<app::ShowSeinUIAnimator>(get_class());
        }
    } // namespace ShowSeinUIAnimator
} // namespace app::classes::types
