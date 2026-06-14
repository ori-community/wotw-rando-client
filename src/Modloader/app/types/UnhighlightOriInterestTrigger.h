#pragma once
#include <Modloader/app/structs/UnhighlightOriInterestTrigger.h>
#include <Modloader/app/structs/UnhighlightOriInterestTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnhighlightOriInterestTrigger {
        inline app::UnhighlightOriInterestTrigger__Class** type_info() {
            static app::UnhighlightOriInterestTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnhighlightOriInterestTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnhighlightOriInterestTrigger__Class* get_class() {
            return il2cpp::get_class<app::UnhighlightOriInterestTrigger__Class>(type_info(), "", "UnhighlightOriInterestTrigger");
        }
        inline app::UnhighlightOriInterestTrigger* create() {
            return il2cpp::create_object<app::UnhighlightOriInterestTrigger>(get_class());
        }
    } // namespace UnhighlightOriInterestTrigger
} // namespace app::classes::types
