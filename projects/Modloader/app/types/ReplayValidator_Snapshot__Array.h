#pragma once
#include <Modloader/app/structs/ReplayValidator_Snapshot__Array.h>
#include <Modloader/app/structs/ReplayValidator_Snapshot__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReplayValidator_Snapshot__Array {
        inline app::ReplayValidator_Snapshot__Array__Class** type_info() {
            static app::ReplayValidator_Snapshot__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReplayValidator_Snapshot__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReplayValidator_Snapshot__Array__Class* get_class() {
            return il2cpp::get_class<app::ReplayValidator_Snapshot__Array__Class>(type_info(), "Moon.Race", "ReplayValidator+Snapshot[]");
        }
        inline app::ReplayValidator_Snapshot__Array* create() {
            return il2cpp::create_object<app::ReplayValidator_Snapshot__Array>(get_class());
        }
    } // namespace ReplayValidator_Snapshot__Array
} // namespace app::classes::types
