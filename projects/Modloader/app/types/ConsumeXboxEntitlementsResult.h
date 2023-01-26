#pragma once
#include <Modloader/app/structs/ConsumeXboxEntitlementsResult.h>
#include <Modloader/app/structs/ConsumeXboxEntitlementsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConsumeXboxEntitlementsResult {
        inline app::ConsumeXboxEntitlementsResult__Class** type_info() {
            static app::ConsumeXboxEntitlementsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConsumeXboxEntitlementsResult__Class**)(modloader::win::memory::resolve_rva(0x04719480));
            }
            return cache;
        }
        inline app::ConsumeXboxEntitlementsResult__Class* get_class() {
            return il2cpp::get_class<app::ConsumeXboxEntitlementsResult__Class>(type_info(), "PlayFab.ClientModels", "ConsumeXboxEntitlementsResult");
        }
        inline app::ConsumeXboxEntitlementsResult* create() {
            return il2cpp::create_object<app::ConsumeXboxEntitlementsResult>(get_class());
        }
    } // namespace ConsumeXboxEntitlementsResult
} // namespace app::classes::types
