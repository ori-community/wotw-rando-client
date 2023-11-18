#pragma once
#include <Modloader/app/structs/PetrifiedOwlBrainBase.h>
#include <Modloader/app/structs/PetrifiedOwlBrainBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBrainBase {
        inline app::PetrifiedOwlBrainBase__Class** type_info() {
            static app::PetrifiedOwlBrainBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBrainBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBrainBase__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBrainBase__Class>(type_info(), "", "PetrifiedOwlBrainBase");
        }
        inline app::PetrifiedOwlBrainBase* create() {
            return il2cpp::create_object<app::PetrifiedOwlBrainBase>(get_class());
        }
    } // namespace PetrifiedOwlBrainBase
} // namespace app::classes::types
