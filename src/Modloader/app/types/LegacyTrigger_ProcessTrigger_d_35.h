#pragma once
#include <Modloader/app/structs/LegacyTrigger_ProcessTrigger_d_35.h>
#include <Modloader/app/structs/LegacyTrigger_ProcessTrigger_d_35__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyTrigger_ProcessTrigger_d_35 {
        inline app::LegacyTrigger_ProcessTrigger_d_35__Class** type_info() {
            static app::LegacyTrigger_ProcessTrigger_d_35__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LegacyTrigger_ProcessTrigger_d_35__Class**)(modloader::win::memory::resolve_rva(0x047654D8));
            }
            return cache;
        }
        inline app::LegacyTrigger_ProcessTrigger_d_35__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyTrigger_ProcessTrigger_d_35__Class>(type_info(), "", "LegacyTrigger", "<ProcessTrigger>d__35");
        }
        inline app::LegacyTrigger_ProcessTrigger_d_35* create() {
            return il2cpp::create_object<app::LegacyTrigger_ProcessTrigger_d_35>(get_class());
        }
    } // namespace LegacyTrigger_ProcessTrigger_d_35
} // namespace app::classes::types
