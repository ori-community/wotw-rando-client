#pragma once
#include <Modloader/app/structs/MirroredAnimationSet.h>
#include <Modloader/app/structs/MirroredAnimationSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MirroredAnimationSet {
        inline app::MirroredAnimationSet__Class** type_info() {
            static app::MirroredAnimationSet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MirroredAnimationSet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MirroredAnimationSet__Class* get_class() {
            return il2cpp::get_class<app::MirroredAnimationSet__Class>(type_info(), "", "MirroredAnimationSet");
        }
        inline app::MirroredAnimationSet* create() {
            return il2cpp::create_object<app::MirroredAnimationSet>(get_class());
        }
    } // namespace MirroredAnimationSet
} // namespace app::classes::types
