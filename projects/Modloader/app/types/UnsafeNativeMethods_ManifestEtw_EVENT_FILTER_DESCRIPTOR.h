#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR__Class.h>
#include <Modloader/app/structs/UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR.h>
#include <Modloader/app/structs/UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR__Boxed.h>

namespace app::classes::types {
    namespace UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR {
        namespace {
            inline app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR__Class* type_info_ref = nullptr;
        }
        inline app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR__Class** type_info = &type_info_ref;
        inline app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR__Class* get_class() {
            return il2cpp::get_nested_class<app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR__Class>(type_info, "Microsoft.Win32", "UnsafeNativeMethods+ManifestEtw", "EVENT_FILTER_DESCRIPTOR");
        }
        inline app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* create() {
            return il2cpp::create_object<app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR>(get_class());
        }
        inline app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR__Boxed* box(app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR value) {
            return il2cpp::box_value<app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR__Boxed>(get_class(), value);
        }
    } // namespace UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR
} // namespace app::classes::types
