#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttributeInstallResult {
        inline app::AttributeInstallResult__Class** type_info = (app::AttributeInstallResult__Class**)(modloader::win::memory::resolve_rva(0x047243B8));
        inline app::AttributeInstallResult__Class* get_class() {
            return il2cpp::get_class<app::AttributeInstallResult__Class>(type_info, "PlayFab.ClientModels", "AttributeInstallResult");
        }
        inline app::AttributeInstallResult* create() {
            return il2cpp::create_object<app::AttributeInstallResult>(get_class());
        }
    } // namespace AttributeInstallResult
} // namespace app::classes::types
