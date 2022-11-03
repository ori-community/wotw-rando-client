#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RisingWaterTrigger {
        namespace {
            inline app::RisingWaterTrigger__Class* type_info_ref = nullptr;
        }
        inline app::RisingWaterTrigger__Class** type_info = &type_info_ref;
        inline app::RisingWaterTrigger__Class* get_class() {
            return il2cpp::get_class<app::RisingWaterTrigger__Class>(type_info, "", "RisingWaterTrigger");
        }
        inline app::RisingWaterTrigger* create() {
            return il2cpp::create_object<app::RisingWaterTrigger>(get_class());
        }
    } // namespace RisingWaterTrigger
} // namespace app::classes::types
