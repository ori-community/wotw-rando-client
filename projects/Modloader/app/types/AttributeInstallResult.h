#pragma once
#include <Modloader/app/structs/AttributeInstallResult.h>
#include <Modloader/app/structs/AttributeInstallResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttributeInstallResult {
        inline app::AttributeInstallResult__Class** type_info() {
            static app::AttributeInstallResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AttributeInstallResult__Class**)(modloader::win::memory::resolve_rva(0x047243B8));
            }
            return cache;
        }
        inline app::AttributeInstallResult__Class* get_class() {
            return il2cpp::get_class<app::AttributeInstallResult__Class>(type_info(), "PlayFab.ClientModels", "AttributeInstallResult");
        }
        inline app::AttributeInstallResult* create() {
            return il2cpp::create_object<app::AttributeInstallResult>(get_class());
        }
    } // namespace AttributeInstallResult
} // namespace app::classes::types
