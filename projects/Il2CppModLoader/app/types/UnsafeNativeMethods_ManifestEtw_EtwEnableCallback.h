#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnsafeNativeMethods_ManifestEtw_EtwEnableCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback__Class** type_info;
        inline app::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback__Class>(type_info, "Microsoft.Win32", "UnsafeNativeMethods+ManifestEtw", "EtwEnableCallback");
        }
        inline app::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback* create() {
            return il2cpp::create_object<app::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback>(get_class());
        }
    } // namespace UnsafeNativeMethods_ManifestEtw_EtwEnableCallback
} // namespace app::classes::types
