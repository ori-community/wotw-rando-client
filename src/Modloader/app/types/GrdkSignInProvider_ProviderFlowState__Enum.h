#pragma once
#include <Modloader/app/structs/GrdkSignInProvider_ProviderFlowState__Enum.h>
#include <Modloader/app/structs/GrdkSignInProvider_ProviderFlowState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrdkSignInProvider_ProviderFlowState__Enum {
        inline app::GrdkSignInProvider_ProviderFlowState__Enum__Class** type_info() {
            static app::GrdkSignInProvider_ProviderFlowState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GrdkSignInProvider_ProviderFlowState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GrdkSignInProvider_ProviderFlowState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GrdkSignInProvider_ProviderFlowState__Enum__Class>(type_info(), "SystemIntegration", "GrdkSignInProvider", "ProviderFlowState");
        }
        inline app::GrdkSignInProvider_ProviderFlowState__Enum* create() {
            return il2cpp::create_object<app::GrdkSignInProvider_ProviderFlowState__Enum>(get_class());
        }
    } // namespace GrdkSignInProvider_ProviderFlowState__Enum
} // namespace app::classes::types
