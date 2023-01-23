#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnsafeNativeMethods_ManifestEtw_ActivityControl__Enum__Class.h>
#include <Modloader/app/structs/UnsafeNativeMethods_ManifestEtw_ActivityControl__Enum.h>

namespace app::classes::types {
    namespace UnsafeNativeMethods_ManifestEtw_ActivityControl__Enum {
        namespace {
            inline app::UnsafeNativeMethods_ManifestEtw_ActivityControl__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UnsafeNativeMethods_ManifestEtw_ActivityControl__Enum__Class** type_info = &type_info_ref;
        inline app::UnsafeNativeMethods_ManifestEtw_ActivityControl__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UnsafeNativeMethods_ManifestEtw_ActivityControl__Enum__Class>(type_info, "Microsoft.Win32", "UnsafeNativeMethods+ManifestEtw", "ActivityControl");
        }
        inline app::UnsafeNativeMethods_ManifestEtw_ActivityControl__Enum* create() {
            return il2cpp::create_object<app::UnsafeNativeMethods_ManifestEtw_ActivityControl__Enum>(get_class());
        }
    } // namespace UnsafeNativeMethods_ManifestEtw_ActivityControl__Enum
} // namespace app::classes::types
