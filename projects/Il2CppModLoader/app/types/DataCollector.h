#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataCollector {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataCollector__Class** type_info;
        inline app::DataCollector__Class* get_class() {
            return il2cpp::get_class<app::DataCollector__Class>(type_info, "System.Diagnostics.Tracing", "DataCollector");
        }
        inline app::DataCollector* create() {
            return il2cpp::create_object<app::DataCollector>(get_class());
        }
        inline app::DataCollector__Boxed* box(app::DataCollector value) {
            return il2cpp::box_value<app::DataCollector__Boxed>(get_class(), value);
        }
    } // namespace DataCollector
} // namespace app::classes::types
