#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SDK_XBL_XblCleanupResult {
        inline app::SDK_XBL_XblCleanupResult__Class** type_info = (app::SDK_XBL_XblCleanupResult__Class**)(modloader::win::memory::resolve_rva(0x04775528));
        inline app::SDK_XBL_XblCleanupResult__Class* get_class() {
            return il2cpp::get_nested_class<app::SDK_XBL_XblCleanupResult__Class>(type_info, "XGamingRuntime", "SDK+XBL", "XblCleanupResult");
        }
        inline app::SDK_XBL_XblCleanupResult* create() {
            return il2cpp::create_object<app::SDK_XBL_XblCleanupResult>(get_class());
        }
    } // namespace SDK_XBL_XblCleanupResult
} // namespace app::classes::types
