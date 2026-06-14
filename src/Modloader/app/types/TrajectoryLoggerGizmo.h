#pragma once
#include <Modloader/app/structs/TrajectoryLoggerGizmo.h>
#include <Modloader/app/structs/TrajectoryLoggerGizmo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TrajectoryLoggerGizmo {
        inline app::TrajectoryLoggerGizmo__Class** type_info() {
            static app::TrajectoryLoggerGizmo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TrajectoryLoggerGizmo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TrajectoryLoggerGizmo__Class* get_class() {
            return il2cpp::get_class<app::TrajectoryLoggerGizmo__Class>(type_info(), "", "TrajectoryLoggerGizmo");
        }
        inline app::TrajectoryLoggerGizmo* create() {
            return il2cpp::create_object<app::TrajectoryLoggerGizmo>(get_class());
        }
    } // namespace TrajectoryLoggerGizmo
} // namespace app::classes::types
