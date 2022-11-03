#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OriInterestTriggerB {
        namespace {
            inline app::OriInterestTriggerB__Class* type_info_ref = nullptr;
        }
        inline app::OriInterestTriggerB__Class** type_info = &type_info_ref;
        inline app::OriInterestTriggerB__Class* get_class() {
            return il2cpp::get_class<app::OriInterestTriggerB__Class>(type_info, "", "OriInterestTriggerB");
        }
        inline app::OriInterestTriggerB* create() {
            return il2cpp::create_object<app::OriInterestTriggerB>(get_class());
        }
    } // namespace OriInterestTriggerB
} // namespace app::classes::types
