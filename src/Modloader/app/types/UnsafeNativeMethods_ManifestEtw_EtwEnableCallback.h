#pragma once
#include <Modloader/app/structs/UnsafeNativeMethods_ManifestEtw_EtwEnableCallback.h>
#include <Modloader/app/structs/UnsafeNativeMethods_ManifestEtw_EtwEnableCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnsafeNativeMethods_ManifestEtw_EtwEnableCallback {
        inline app::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback__Class** type_info() {
            static app::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback__Class**)(modloader::win::memory::resolve_rva(0x04785000));
            }
            return cache;
        }
        inline app::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback__Class>(type_info(), "Microsoft.Win32", "UnsafeNativeMethods+ManifestEtw", "EtwEnableCallback");
        }
        inline app::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback* create() {
            return il2cpp::create_object<app::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback>(get_class());
        }
    } // namespace UnsafeNativeMethods_ManifestEtw_EtwEnableCallback
} // namespace app::classes::types
