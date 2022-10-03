#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventSendingStage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventSendingStage__Class** type_info;
        inline app::EventSendingStage__Class* get_class() {
            return il2cpp::get_class<app::EventSendingStage__Class>(type_info, "PlayFab.Pipeline", "EventSendingStage");
        }
        inline app::EventSendingStage* create() {
            return il2cpp::create_object<app::EventSendingStage>(get_class());
        }
    } // namespace EventSendingStage
} // namespace app::classes::types
