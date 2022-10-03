#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrdkSignInProvider_ProviderFlowState__Enum {
        namespace {
            app::GrdkSignInProvider_ProviderFlowState__Enum__Class* type_info_ref = nullptr;
        }
        app::GrdkSignInProvider_ProviderFlowState__Enum__Class** type_info = &type_info_ref;
        inline app::GrdkSignInProvider_ProviderFlowState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GrdkSignInProvider_ProviderFlowState__Enum__Class>(type_info, "SystemIntegration", "GrdkSignInProvider", "ProviderFlowState");
        }
        inline app::GrdkSignInProvider_ProviderFlowState__Enum* create() {
            return il2cpp::create_object<app::GrdkSignInProvider_ProviderFlowState__Enum>(get_class());
        }
    } // namespace GrdkSignInProvider_ProviderFlowState__Enum
} // namespace app::classes::types
