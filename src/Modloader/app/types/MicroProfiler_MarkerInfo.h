#pragma once
#include <Modloader/app/structs/MicroProfiler_MarkerInfo.h>
#include <Modloader/app/structs/MicroProfiler_MarkerInfo__Array.h>
#include <Modloader/app/structs/MicroProfiler_MarkerInfo__Boxed.h>
#include <Modloader/app/structs/MicroProfiler_MarkerInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MicroProfiler_MarkerInfo {
        inline app::MicroProfiler_MarkerInfo__Class** type_info() {
            static app::MicroProfiler_MarkerInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MicroProfiler_MarkerInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MicroProfiler_MarkerInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::MicroProfiler_MarkerInfo__Class>(type_info(), "", "MicroProfiler", "MarkerInfo");
        }
        inline app::MicroProfiler_MarkerInfo* create() {
            return il2cpp::create_object<app::MicroProfiler_MarkerInfo>(get_class());
        }
        inline app::MicroProfiler_MarkerInfo__Boxed* box(app::MicroProfiler_MarkerInfo value) {
            return il2cpp::box_value<app::MicroProfiler_MarkerInfo__Boxed>(get_class(), value);
        }
        inline app::MicroProfiler_MarkerInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::MicroProfiler_MarkerInfo__Array>(get_class(), size);
        }
        inline app::MicroProfiler_MarkerInfo__Array* create_array(const std::vector<app::MicroProfiler_MarkerInfo>& items) {
            return il2cpp::array_new<app::MicroProfiler_MarkerInfo__Array>(get_class(), items);
        }
    } // namespace MicroProfiler_MarkerInfo
} // namespace app::classes::types
