#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConsumePSNEntitlementsResult {
        inline app::ConsumePSNEntitlementsResult__Class** type_info = (app::ConsumePSNEntitlementsResult__Class**)(modloader::win::memory::resolve_rva(0x0472C628));
        inline app::ConsumePSNEntitlementsResult__Class* get_class() {
            return il2cpp::get_class<app::ConsumePSNEntitlementsResult__Class>(type_info, "PlayFab.ClientModels", "ConsumePSNEntitlementsResult");
        }
        inline app::ConsumePSNEntitlementsResult* create() {
            return il2cpp::create_object<app::ConsumePSNEntitlementsResult>(get_class());
        }
    } // namespace ConsumePSNEntitlementsResult
} // namespace app::classes::types
