#pragma once
#include <Modloader/app/structs/UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTORPtr.h>
#include <Modloader/app/structs/UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTORPtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTORPtr {
        inline app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTORPtr__Class** type_info() {
            static app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTORPtr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTORPtr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTORPtr__Class* get_class() {
            return il2cpp::get_class<app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTORPtr__Class>(type_info(), "Microsoft.Win32", "UnsafeNativeMethods+ManifestEtw+EVENT_FILTER_DESCRIPTOR*");
        }
        inline app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTORPtr* create() {
            return il2cpp::create_object<app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTORPtr>(get_class());
        }
    } // namespace UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTORPtr
} // namespace app::classes::types
