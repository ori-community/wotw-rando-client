#pragma once
#include <Modloader/app/structs/PlayFabSendingProxy.h>
#include <Modloader/app/structs/PlayFabSendingProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabSendingProxy {
        inline app::PlayFabSendingProxy__Class** type_info() {
            static app::PlayFabSendingProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabSendingProxy__Class**)(modloader::win::memory::resolve_rva(0x04731A20));
            }
            return cache;
        }
        inline app::PlayFabSendingProxy__Class* get_class() {
            return il2cpp::get_class<app::PlayFabSendingProxy__Class>(type_info(), "", "PlayFabSendingProxy");
        }
        inline app::PlayFabSendingProxy* create() {
            return il2cpp::create_object<app::PlayFabSendingProxy>(get_class());
        }
    } // namespace PlayFabSendingProxy
} // namespace app::classes::types
