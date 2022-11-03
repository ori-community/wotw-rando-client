#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTORPtr {
        namespace {
            inline app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTORPtr__Class* type_info_ref = nullptr;
        }
        inline app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTORPtr__Class** type_info = &type_info_ref;
        inline app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTORPtr__Class* get_class() {
            return il2cpp::get_class<app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTORPtr__Class>(type_info, "Microsoft.Win32", "UnsafeNativeMethods+ManifestEtw+EVENT_FILTER_DESCRIPTOR*");
        }
        inline app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTORPtr* create() {
            return il2cpp::create_object<app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTORPtr>(get_class());
        }
    } // namespace UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTORPtr
} // namespace app::classes::types
