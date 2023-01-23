#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DataBundleEntry__Array__Class.h>
#include <Modloader/app/structs/DataBundleEntry__Array.h>

namespace app::classes::types {
    namespace DataBundleEntry__Array {
        namespace {
            inline app::DataBundleEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::DataBundleEntry__Array__Class** type_info = &type_info_ref;
        inline app::DataBundleEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::DataBundleEntry__Array__Class>(type_info, "Moon.Telemetry.Performance", "DataBundleEntry[]");
        }
        inline app::DataBundleEntry__Array* create() {
            return il2cpp::create_object<app::DataBundleEntry__Array>(get_class());
        }
    } // namespace DataBundleEntry__Array
} // namespace app::classes::types
