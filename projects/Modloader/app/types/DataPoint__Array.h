#pragma once
#include <Modloader/app/structs/DataPoint__Array.h>
#include <Modloader/app/structs/DataPoint__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataPoint__Array {
        inline app::DataPoint__Array__Class** type_info() {
            static app::DataPoint__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataPoint__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::DataPoint__Array__Class>(type_info(), "Moon.Telemetry", "DataPoint[]");
        }
        inline app::DataPoint__Array* create() {
            return il2cpp::create_object<app::DataPoint__Array>(get_class());
        }
    } // namespace DataPoint__Array
} // namespace app::classes::types
