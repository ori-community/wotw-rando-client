#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProviderBase {
        namespace {
            inline app::ProviderBase__Class* type_info_ref = nullptr;
        }
        inline app::ProviderBase__Class** type_info = &type_info_ref;
        inline app::ProviderBase__Class* get_class() {
            return il2cpp::get_class<app::ProviderBase__Class>(type_info, "System.Configuration.Provider", "ProviderBase");
        }
        inline app::ProviderBase* create() {
            return il2cpp::create_object<app::ProviderBase>(get_class());
        }
    } // namespace ProviderBase
} // namespace app::classes::types
