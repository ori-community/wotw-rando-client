#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SliceExecutionStats {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SliceExecutionStats__Class** type_info;
        inline app::SliceExecutionStats__Class* get_class() {
            return il2cpp::get_class<app::SliceExecutionStats__Class>(type_info, "Moon.TimeSlicer", "SliceExecutionStats");
        }
        inline app::SliceExecutionStats* create() {
            return il2cpp::create_object<app::SliceExecutionStats>(get_class());
        }
        inline app::SliceExecutionStats__Boxed* box(app::SliceExecutionStats value) {
            return il2cpp::box_value<app::SliceExecutionStats__Boxed>(get_class(), value);
        }
    } // namespace SliceExecutionStats
} // namespace app::classes::types
