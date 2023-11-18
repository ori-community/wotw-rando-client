#pragma once
#include <Modloader/app/structs/MicroProfiler_StatType__Enum.h>
#include <Modloader/app/structs/MicroProfiler_StatType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MicroProfiler_StatType__Enum {
        inline app::MicroProfiler_StatType__Enum__Class** type_info() {
            static app::MicroProfiler_StatType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MicroProfiler_StatType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MicroProfiler_StatType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MicroProfiler_StatType__Enum__Class>(type_info(), "", "MicroProfiler", "StatType");
        }
        inline app::MicroProfiler_StatType__Enum* create() {
            return il2cpp::create_object<app::MicroProfiler_StatType__Enum>(get_class());
        }
    } // namespace MicroProfiler_StatType__Enum
} // namespace app::classes::types
