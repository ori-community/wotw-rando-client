#pragma once
#include <Modloader/app/structs/Pose.h>
#include <Modloader/app/structs/Pose__Boxed.h>
#include <Modloader/app/structs/Pose__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Pose {
        inline app::Pose__Class** type_info() {
            static app::Pose__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Pose__Class**)(modloader::win::memory::resolve_rva(0x0475BCA8));
            }
            return cache;
        }
        inline app::Pose__Class* get_class() {
            return il2cpp::get_class<app::Pose__Class>(type_info(), "UnityEngine", "Pose");
        }
        inline app::Pose* create() {
            return il2cpp::create_object<app::Pose>(get_class());
        }
        inline app::Pose__Boxed* box(app::Pose value) {
            return il2cpp::box_value<app::Pose__Boxed>(get_class(), value);
        }
    } // namespace Pose
} // namespace app::classes::types
