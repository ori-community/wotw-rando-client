#pragma once
#include <Modloader/app/structs/VerletStructureAnimationPostprocess.h>
#include <Modloader/app/structs/VerletStructureAnimationPostprocess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletStructureAnimationPostprocess {
        inline app::VerletStructureAnimationPostprocess__Class** type_info() {
            static app::VerletStructureAnimationPostprocess__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletStructureAnimationPostprocess__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletStructureAnimationPostprocess__Class* get_class() {
            return il2cpp::get_class<app::VerletStructureAnimationPostprocess__Class>(type_info(), "Moon", "VerletStructureAnimationPostprocess");
        }
        inline app::VerletStructureAnimationPostprocess* create() {
            return il2cpp::create_object<app::VerletStructureAnimationPostprocess>(get_class());
        }
    } // namespace VerletStructureAnimationPostprocess
} // namespace app::classes::types
