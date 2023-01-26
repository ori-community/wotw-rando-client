#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet.h>
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet {
        inline app::PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet__Class** type_info() {
            static app::PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet__Class>(type_info(), "", "PetrifiedOwlBossBaseBehaviour", "PetrifiedOwlBossBaseStatesSet");
        }
        inline app::PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet>(get_class());
        }
    } // namespace PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet
} // namespace app::classes::types
