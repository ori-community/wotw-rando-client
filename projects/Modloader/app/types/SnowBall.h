#pragma once
#include <Modloader/app/structs/SnowBall.h>
#include <Modloader/app/structs/SnowBall__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SnowBall {
        inline app::SnowBall__Class** type_info() {
            static app::SnowBall__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SnowBall__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SnowBall__Class* get_class() {
            return il2cpp::get_class<app::SnowBall__Class>(type_info(), "", "SnowBall");
        }
        inline app::SnowBall* create() {
            return il2cpp::create_object<app::SnowBall>(get_class());
        }
    } // namespace SnowBall
} // namespace app::classes::types
