#pragma once
#include <Modloader/app/structs/SeinTrajectory.h>
#include <Modloader/app/structs/SeinTrajectory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinTrajectory {
        inline app::SeinTrajectory__Class** type_info() {
            static app::SeinTrajectory__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinTrajectory__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinTrajectory__Class* get_class() {
            return il2cpp::get_class<app::SeinTrajectory__Class>(type_info(), "", "SeinTrajectory");
        }
        inline app::SeinTrajectory* create() {
            return il2cpp::create_object<app::SeinTrajectory>(get_class());
        }
    } // namespace SeinTrajectory
} // namespace app::classes::types
