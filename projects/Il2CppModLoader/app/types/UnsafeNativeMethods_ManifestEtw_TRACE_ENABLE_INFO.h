#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO {
        namespace {
            inline app::UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO__Class* type_info_ref = nullptr;
        }
        inline app::UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO__Class** type_info = &type_info_ref;
        inline app::UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO__Class* get_class() {
            return il2cpp::get_nested_class<app::UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO__Class>(type_info, "Microsoft.Win32", "UnsafeNativeMethods+ManifestEtw", "TRACE_ENABLE_INFO");
        }
        inline app::UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO* create() {
            return il2cpp::create_object<app::UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO>(get_class());
        }
        inline app::UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO__Boxed* box(app::UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO value) {
            return il2cpp::box_value<app::UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO__Boxed>(get_class(), value);
        }
    } // namespace UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO
} // namespace app::classes::types
