#pragma once
#include <Modloader/app/structs/DataCollector.h>
#include <Modloader/app/structs/DataCollector__Boxed.h>
#include <Modloader/app/structs/DataCollector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataCollector {
        inline app::DataCollector__Class** type_info() {
            static app::DataCollector__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataCollector__Class**)(modloader::win::memory::resolve_rva(0x047437C8));
            }
            return cache;
        }
        inline app::DataCollector__Class* get_class() {
            return il2cpp::get_class<app::DataCollector__Class>(type_info(), "System.Diagnostics.Tracing", "DataCollector");
        }
        inline app::DataCollector* create() {
            return il2cpp::create_object<app::DataCollector>(get_class());
        }
        inline app::DataCollector__Boxed* box(app::DataCollector value) {
            return il2cpp::box_value<app::DataCollector__Boxed>(get_class(), value);
        }
    } // namespace DataCollector
} // namespace app::classes::types
