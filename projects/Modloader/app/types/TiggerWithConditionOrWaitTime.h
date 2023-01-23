#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TiggerWithConditionOrWaitTime__Class.h>
#include <Modloader/app/structs/TiggerWithConditionOrWaitTime.h>

namespace app::classes::types {
    namespace TiggerWithConditionOrWaitTime {
        namespace {
            inline app::TiggerWithConditionOrWaitTime__Class* type_info_ref = nullptr;
        }
        inline app::TiggerWithConditionOrWaitTime__Class** type_info = &type_info_ref;
        inline app::TiggerWithConditionOrWaitTime__Class* get_class() {
            return il2cpp::get_class<app::TiggerWithConditionOrWaitTime__Class>(type_info, "", "TiggerWithConditionOrWaitTime");
        }
        inline app::TiggerWithConditionOrWaitTime* create() {
            return il2cpp::create_object<app::TiggerWithConditionOrWaitTime>(get_class());
        }
    } // namespace TiggerWithConditionOrWaitTime
} // namespace app::classes::types
