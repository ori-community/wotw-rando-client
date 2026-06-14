#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFinalComboBehaviour {
        inline app::PetrifiedOwlBossFinalComboBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossFinalComboBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBossFinalComboBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFinalComboBehaviour__Class>(type_info(), "", "PetrifiedOwlBossFinalComboBehaviour");
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFinalComboBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFinalComboBehaviour
} // namespace app::classes::types
