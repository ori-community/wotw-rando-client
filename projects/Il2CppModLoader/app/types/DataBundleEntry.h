#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataBundleEntry {
        namespace {
            app::DataBundleEntry__Class* type_info_ref = nullptr;
        }
        app::DataBundleEntry__Class** type_info = &type_info_ref;
        inline app::DataBundleEntry__Class* get_class() {
            return il2cpp::get_class<app::DataBundleEntry__Class>(type_info, "Moon.Telemetry.Performance", "DataBundleEntry");
        }
        inline app::DataBundleEntry* create() {
            return il2cpp::create_object<app::DataBundleEntry>(get_class());
        }
        inline app::DataBundleEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::DataBundleEntry__Array>(get_class(), size);
        }
    } // namespace DataBundleEntry
} // namespace app::classes::types
