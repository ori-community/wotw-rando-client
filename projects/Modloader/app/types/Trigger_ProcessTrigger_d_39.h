#pragma once
#include <Modloader/app/structs/Trigger_ProcessTrigger_d_39.h>
#include <Modloader/app/structs/Trigger_ProcessTrigger_d_39__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Trigger_ProcessTrigger_d_39 {
        inline app::Trigger_ProcessTrigger_d_39__Class** type_info() {
            static app::Trigger_ProcessTrigger_d_39__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Trigger_ProcessTrigger_d_39__Class**)(modloader::win::memory::resolve_rva(0x0472AB40));
            }
            return cache;
        }
        inline app::Trigger_ProcessTrigger_d_39__Class* get_class() {
            return il2cpp::get_nested_class<app::Trigger_ProcessTrigger_d_39__Class>(type_info(), "", "Trigger", "<ProcessTrigger>d__39");
        }
        inline app::Trigger_ProcessTrigger_d_39* create() {
            return il2cpp::create_object<app::Trigger_ProcessTrigger_d_39>(get_class());
        }
    } // namespace Trigger_ProcessTrigger_d_39
} // namespace app::classes::types
