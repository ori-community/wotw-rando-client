#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PhysicalSystemProfiler_UpdateInfo__Array__Class.h>
#include <Modloader/app/structs/PhysicalSystemProfiler_UpdateInfo__Array.h>

namespace app::classes::types {
    namespace PhysicalSystemProfiler_UpdateInfo__Array {
        namespace {
            inline app::PhysicalSystemProfiler_UpdateInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::PhysicalSystemProfiler_UpdateInfo__Array__Class** type_info = &type_info_ref;
        inline app::PhysicalSystemProfiler_UpdateInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::PhysicalSystemProfiler_UpdateInfo__Array__Class>(type_info, "", "PhysicalSystemProfiler+UpdateInfo[]");
        }
        inline app::PhysicalSystemProfiler_UpdateInfo__Array* create() {
            return il2cpp::create_object<app::PhysicalSystemProfiler_UpdateInfo__Array>(get_class());
        }
    } // namespace PhysicalSystemProfiler_UpdateInfo__Array
} // namespace app::classes::types
