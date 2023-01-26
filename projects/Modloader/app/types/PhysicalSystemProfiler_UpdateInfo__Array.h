#pragma once
#include <Modloader/app/structs/PhysicalSystemProfiler_UpdateInfo__Array.h>
#include <Modloader/app/structs/PhysicalSystemProfiler_UpdateInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicalSystemProfiler_UpdateInfo__Array {
        inline app::PhysicalSystemProfiler_UpdateInfo__Array__Class** type_info() {
            static app::PhysicalSystemProfiler_UpdateInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhysicalSystemProfiler_UpdateInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhysicalSystemProfiler_UpdateInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::PhysicalSystemProfiler_UpdateInfo__Array__Class>(type_info(), "", "PhysicalSystemProfiler+UpdateInfo[]");
        }
        inline app::PhysicalSystemProfiler_UpdateInfo__Array* create() {
            return il2cpp::create_object<app::PhysicalSystemProfiler_UpdateInfo__Array>(get_class());
        }
    } // namespace PhysicalSystemProfiler_UpdateInfo__Array
} // namespace app::classes::types
