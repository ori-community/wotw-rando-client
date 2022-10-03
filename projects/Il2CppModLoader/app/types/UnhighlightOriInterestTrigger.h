#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnhighlightOriInterestTrigger {
        namespace {
            app::UnhighlightOriInterestTrigger__Class* type_info_ref = nullptr;
        }
        app::UnhighlightOriInterestTrigger__Class** type_info = &type_info_ref;
        inline app::UnhighlightOriInterestTrigger__Class* get_class() {
            return il2cpp::get_class<app::UnhighlightOriInterestTrigger__Class>(type_info, "", "UnhighlightOriInterestTrigger");
        }
        inline app::UnhighlightOriInterestTrigger* create() {
            return il2cpp::create_object<app::UnhighlightOriInterestTrigger>(get_class());
        }
    } // namespace UnhighlightOriInterestTrigger
} // namespace app::classes::types
