#pragma once
#include <Modloader/app/structs/DataBundleEntry__Array.h>
#include <Modloader/app/structs/DataBundleEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataBundleEntry__Array {
        inline app::DataBundleEntry__Array__Class** type_info() {
            static app::DataBundleEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataBundleEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataBundleEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::DataBundleEntry__Array__Class>(type_info(), "Moon.Telemetry.Performance", "DataBundleEntry[]");
        }
        inline app::DataBundleEntry__Array* create() {
            return il2cpp::create_object<app::DataBundleEntry__Array>(get_class());
        }
    } // namespace DataBundleEntry__Array
} // namespace app::classes::types
