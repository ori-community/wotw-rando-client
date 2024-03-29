#pragma once
#include <Modloader/app/structs/MicroProfiler_StatInfo.h>
#include <Modloader/app/structs/MicroProfiler_StatInfo__Array.h>
#include <Modloader/app/structs/MicroProfiler_StatInfo__Boxed.h>
#include <Modloader/app/structs/MicroProfiler_StatInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MicroProfiler_StatInfo {
        inline app::MicroProfiler_StatInfo__Class** type_info() {
            static app::MicroProfiler_StatInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MicroProfiler_StatInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MicroProfiler_StatInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::MicroProfiler_StatInfo__Class>(type_info(), "", "MicroProfiler", "StatInfo");
        }
        inline app::MicroProfiler_StatInfo* create() {
            return il2cpp::create_object<app::MicroProfiler_StatInfo>(get_class());
        }
        inline app::MicroProfiler_StatInfo__Boxed* box(app::MicroProfiler_StatInfo value) {
            return il2cpp::box_value<app::MicroProfiler_StatInfo__Boxed>(get_class(), value);
        }
        inline app::MicroProfiler_StatInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::MicroProfiler_StatInfo__Array>(get_class(), size);
        }
        inline app::MicroProfiler_StatInfo__Array* create_array(const std::vector<app::MicroProfiler_StatInfo>& items) {
            return il2cpp::array_new<app::MicroProfiler_StatInfo__Array>(get_class(), items);
        }
    } // namespace MicroProfiler_StatInfo
} // namespace app::classes::types
