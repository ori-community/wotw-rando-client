#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TrajectoryLoggerGizmo__Class.h>
#include <Modloader/app/structs/TrajectoryLoggerGizmo.h>

namespace app::classes::types {
    namespace TrajectoryLoggerGizmo {
        namespace {
            inline app::TrajectoryLoggerGizmo__Class* type_info_ref = nullptr;
        }
        inline app::TrajectoryLoggerGizmo__Class** type_info = &type_info_ref;
        inline app::TrajectoryLoggerGizmo__Class* get_class() {
            return il2cpp::get_class<app::TrajectoryLoggerGizmo__Class>(type_info, "", "TrajectoryLoggerGizmo");
        }
        inline app::TrajectoryLoggerGizmo* create() {
            return il2cpp::create_object<app::TrajectoryLoggerGizmo>(get_class());
        }
    } // namespace TrajectoryLoggerGizmo
} // namespace app::classes::types
