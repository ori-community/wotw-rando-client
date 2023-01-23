#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OnEnterWaterTrigger__Class.h>
#include <Modloader/app/structs/OnEnterWaterTrigger.h>

namespace app::classes::types {
    namespace OnEnterWaterTrigger {
        namespace {
            inline app::OnEnterWaterTrigger__Class* type_info_ref = nullptr;
        }
        inline app::OnEnterWaterTrigger__Class** type_info = &type_info_ref;
        inline app::OnEnterWaterTrigger__Class* get_class() {
            return il2cpp::get_class<app::OnEnterWaterTrigger__Class>(type_info, "", "OnEnterWaterTrigger");
        }
        inline app::OnEnterWaterTrigger* create() {
            return il2cpp::create_object<app::OnEnterWaterTrigger>(get_class());
        }
    } // namespace OnEnterWaterTrigger
} // namespace app::classes::types
