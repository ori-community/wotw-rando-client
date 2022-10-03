#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TiggerWithConditionOrWaitTime {
        namespace {
            app::TiggerWithConditionOrWaitTime__Class* type_info_ref = nullptr;
        }
        app::TiggerWithConditionOrWaitTime__Class** type_info = &type_info_ref;
        inline app::TiggerWithConditionOrWaitTime__Class* get_class() {
            return il2cpp::get_class<app::TiggerWithConditionOrWaitTime__Class>(type_info, "", "TiggerWithConditionOrWaitTime");
        }
        inline app::TiggerWithConditionOrWaitTime* create() {
            return il2cpp::create_object<app::TiggerWithConditionOrWaitTime>(get_class());
        }
    } // namespace TiggerWithConditionOrWaitTime
} // namespace app::classes::types
