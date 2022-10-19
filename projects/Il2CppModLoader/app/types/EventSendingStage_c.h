#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventSendingStage_c {
        inline app::EventSendingStage_c__Class** type_info = (app::EventSendingStage_c__Class**)(modloader::win::memory::resolve_rva(0x0476F0B8));
        inline app::EventSendingStage_c__Class* get_class() {
            return il2cpp::get_nested_class<app::EventSendingStage_c__Class>(type_info, "PlayFab.Pipeline", "EventSendingStage", "<>c");
        }
        inline app::EventSendingStage_c* create() {
            return il2cpp::create_object<app::EventSendingStage_c>(get_class());
        }
    } // namespace EventSendingStage_c
} // namespace app::classes::types
