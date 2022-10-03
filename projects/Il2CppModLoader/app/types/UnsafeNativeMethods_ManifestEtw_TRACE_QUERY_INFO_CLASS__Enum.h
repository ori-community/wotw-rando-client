#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS__Enum {
        namespace {
            app::UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS__Enum__Class* type_info_ref = nullptr;
        }
        app::UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS__Enum__Class** type_info = &type_info_ref;
        inline app::UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS__Enum__Class>(type_info, "Microsoft.Win32", "UnsafeNativeMethods+ManifestEtw", "TRACE_QUERY_INFO_CLASS");
        }
        inline app::UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS__Enum* create() {
            return il2cpp::create_object<app::UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS__Enum>(get_class());
        }
    } // namespace UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS__Enum
} // namespace app::classes::types
