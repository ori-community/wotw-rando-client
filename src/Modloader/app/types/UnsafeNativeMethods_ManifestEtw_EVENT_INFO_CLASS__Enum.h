#pragma once
#include <Modloader/app/structs/UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS__Enum.h>
#include <Modloader/app/structs/UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS__Enum {
        inline app::UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS__Enum__Class** type_info() {
            static app::UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS__Enum__Class>(type_info(), "Microsoft.Win32", "UnsafeNativeMethods+ManifestEtw", "EVENT_INFO_CLASS");
        }
        inline app::UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS__Enum* create() {
            return il2cpp::create_object<app::UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS__Enum>(get_class());
        }
    } // namespace UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS__Enum
} // namespace app::classes::types
