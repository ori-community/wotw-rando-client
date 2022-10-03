#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SafeFindHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SafeFindHandle__Class** type_info;
        inline app::SafeFindHandle__Class* get_class() {
            return il2cpp::get_class<app::SafeFindHandle__Class>(type_info, "Microsoft.Win32.SafeHandles", "SafeFindHandle");
        }
        inline app::SafeFindHandle* create() {
            return il2cpp::create_object<app::SafeFindHandle>(get_class());
        }
    } // namespace SafeFindHandle
} // namespace app::classes::types
