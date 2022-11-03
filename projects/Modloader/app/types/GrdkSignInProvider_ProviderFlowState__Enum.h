#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GrdkSignInProvider_ProviderFlowState__Enum {
        namespace {
            inline app::GrdkSignInProvider_ProviderFlowState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::GrdkSignInProvider_ProviderFlowState__Enum__Class** type_info = &type_info_ref;
        inline app::GrdkSignInProvider_ProviderFlowState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GrdkSignInProvider_ProviderFlowState__Enum__Class>(type_info, "SystemIntegration", "GrdkSignInProvider", "ProviderFlowState");
        }
        inline app::GrdkSignInProvider_ProviderFlowState__Enum* create() {
            return il2cpp::create_object<app::GrdkSignInProvider_ProviderFlowState__Enum>(get_class());
        }
    } // namespace GrdkSignInProvider_ProviderFlowState__Enum
} // namespace app::classes::types
