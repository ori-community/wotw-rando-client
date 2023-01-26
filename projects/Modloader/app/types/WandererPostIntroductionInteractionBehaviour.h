#pragma once
#include <Modloader/app/structs/WandererPostIntroductionInteractionBehaviour.h>
#include <Modloader/app/structs/WandererPostIntroductionInteractionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WandererPostIntroductionInteractionBehaviour {
        inline app::WandererPostIntroductionInteractionBehaviour__Class** type_info() {
            static app::WandererPostIntroductionInteractionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WandererPostIntroductionInteractionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WandererPostIntroductionInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererPostIntroductionInteractionBehaviour__Class>(type_info(), "", "WandererPostIntroductionInteractionBehaviour");
        }
        inline app::WandererPostIntroductionInteractionBehaviour* create() {
            return il2cpp::create_object<app::WandererPostIntroductionInteractionBehaviour>(get_class());
        }
    } // namespace WandererPostIntroductionInteractionBehaviour
} // namespace app::classes::types
