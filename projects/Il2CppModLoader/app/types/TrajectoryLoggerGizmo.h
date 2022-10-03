#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TrajectoryLoggerGizmo {
        namespace {
            app::TrajectoryLoggerGizmo__Class* type_info_ref = nullptr;
        }
        app::TrajectoryLoggerGizmo__Class** type_info = &type_info_ref;
        inline app::TrajectoryLoggerGizmo__Class* get_class() {
            return il2cpp::get_class<app::TrajectoryLoggerGizmo__Class>(type_info, "", "TrajectoryLoggerGizmo");
        }
        inline app::TrajectoryLoggerGizmo* create() {
            return il2cpp::create_object<app::TrajectoryLoggerGizmo>(get_class());
        }
    } // namespace TrajectoryLoggerGizmo
} // namespace app::classes::types
