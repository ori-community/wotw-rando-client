#pragma once
#include <Modloader/app/structs/DataBundleEntry.h>
#include <Modloader/app/structs/DataBundleEntry__Array.h>
#include <Modloader/app/structs/DataBundleEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataBundleEntry {
        inline app::DataBundleEntry__Class** type_info() {
            static app::DataBundleEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataBundleEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataBundleEntry__Class* get_class() {
            return il2cpp::get_class<app::DataBundleEntry__Class>(type_info(), "Moon.Telemetry.Performance", "DataBundleEntry");
        }
        inline app::DataBundleEntry* create() {
            return il2cpp::create_object<app::DataBundleEntry>(get_class());
        }
        inline app::DataBundleEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::DataBundleEntry__Array>(get_class(), size);
        }
        inline app::DataBundleEntry__Array* create_array(const std::vector<app::DataBundleEntry*>& items) {
            return il2cpp::array_new<app::DataBundleEntry__Array>(get_class(), items);
        }
    } // namespace DataBundleEntry
} // namespace app::classes::types
