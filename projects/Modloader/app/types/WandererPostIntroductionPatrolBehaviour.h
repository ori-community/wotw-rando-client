#pragma once
#include <Modloader/app/structs/WandererPostIntroductionPatrolBehaviour.h>
#include <Modloader/app/structs/WandererPostIntroductionPatrolBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WandererPostIntroductionPatrolBehaviour {
        inline app::WandererPostIntroductionPatrolBehaviour__Class** type_info() {
            static app::WandererPostIntroductionPatrolBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WandererPostIntroductionPatrolBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WandererPostIntroductionPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererPostIntroductionPatrolBehaviour__Class>(type_info(), "", "WandererPostIntroductionPatrolBehaviour");
        }
        inline app::WandererPostIntroductionPatrolBehaviour* create() {
            return il2cpp::create_object<app::WandererPostIntroductionPatrolBehaviour>(get_class());
        }
    } // namespace WandererPostIntroductionPatrolBehaviour
} // namespace app::classes::types
