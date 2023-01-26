#pragma once
#include <Modloader/app/structs/TurningAnimation.h>
#include <Modloader/app/structs/TurningAnimation__Array.h>
#include <Modloader/app/structs/TurningAnimation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurningAnimation {
        inline app::TurningAnimation__Class** type_info() {
            static app::TurningAnimation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurningAnimation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurningAnimation__Class* get_class() {
            return il2cpp::get_class<app::TurningAnimation__Class>(type_info(), "Moon", "TurningAnimation");
        }
        inline app::TurningAnimation* create() {
            return il2cpp::create_object<app::TurningAnimation>(get_class());
        }
        inline app::TurningAnimation__Array* create_array(int size) {
            return il2cpp::array_new<app::TurningAnimation__Array>(get_class(), size);
        }
        inline app::TurningAnimation__Array* create_array(const std::vector<app::TurningAnimation*>& items) {
            return il2cpp::array_new<app::TurningAnimation__Array>(get_class(), items);
        }
    } // namespace TurningAnimation
} // namespace app::classes::types
