#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CarryablePickedUpTrigger__Class.h>
#include <Modloader/app/structs/CarryablePickedUpTrigger.h>

namespace app::classes::types {
    namespace CarryablePickedUpTrigger {
        namespace {
            inline app::CarryablePickedUpTrigger__Class* type_info_ref = nullptr;
        }
        inline app::CarryablePickedUpTrigger__Class** type_info = &type_info_ref;
        inline app::CarryablePickedUpTrigger__Class* get_class() {
            return il2cpp::get_class<app::CarryablePickedUpTrigger__Class>(type_info, "", "CarryablePickedUpTrigger");
        }
        inline app::CarryablePickedUpTrigger* create() {
            return il2cpp::create_object<app::CarryablePickedUpTrigger>(get_class());
        }
    } // namespace CarryablePickedUpTrigger
} // namespace app::classes::types
