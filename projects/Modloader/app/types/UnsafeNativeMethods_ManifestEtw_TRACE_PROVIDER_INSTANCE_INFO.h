#pragma once
#include <Modloader/app/structs/UnsafeNativeMethods_ManifestEtw_TRACE_PROVIDER_INSTANCE_INFO.h>
#include <Modloader/app/structs/UnsafeNativeMethods_ManifestEtw_TRACE_PROVIDER_INSTANCE_INFO__Boxed.h>
#include <Modloader/app/structs/UnsafeNativeMethods_ManifestEtw_TRACE_PROVIDER_INSTANCE_INFO__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnsafeNativeMethods_ManifestEtw_TRACE_PROVIDER_INSTANCE_INFO {
        inline app::UnsafeNativeMethods_ManifestEtw_TRACE_PROVIDER_INSTANCE_INFO__Class** type_info() {
            static app::UnsafeNativeMethods_ManifestEtw_TRACE_PROVIDER_INSTANCE_INFO__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnsafeNativeMethods_ManifestEtw_TRACE_PROVIDER_INSTANCE_INFO__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnsafeNativeMethods_ManifestEtw_TRACE_PROVIDER_INSTANCE_INFO__Class* get_class() {
            return il2cpp::get_nested_class<app::UnsafeNativeMethods_ManifestEtw_TRACE_PROVIDER_INSTANCE_INFO__Class>(type_info(), "Microsoft.Win32", "UnsafeNativeMethods+ManifestEtw", "TRACE_PROVIDER_INSTANCE_INFO");
        }
        inline app::UnsafeNativeMethods_ManifestEtw_TRACE_PROVIDER_INSTANCE_INFO* create() {
            return il2cpp::create_object<app::UnsafeNativeMethods_ManifestEtw_TRACE_PROVIDER_INSTANCE_INFO>(get_class());
        }
        inline app::UnsafeNativeMethods_ManifestEtw_TRACE_PROVIDER_INSTANCE_INFO__Boxed* box(app::UnsafeNativeMethods_ManifestEtw_TRACE_PROVIDER_INSTANCE_INFO value) {
            return il2cpp::box_value<app::UnsafeNativeMethods_ManifestEtw_TRACE_PROVIDER_INSTANCE_INFO__Boxed>(get_class(), value);
        }
    } // namespace UnsafeNativeMethods_ManifestEtw_TRACE_PROVIDER_INSTANCE_INFO
} // namespace app::classes::types
