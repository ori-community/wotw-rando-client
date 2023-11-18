#pragma once
#include <Modloader/app/structs/MonsterGrabPosition.h>
#include <Modloader/app/structs/MonsterGrabPosition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonsterGrabPosition {
        inline app::MonsterGrabPosition__Class** type_info() {
            static app::MonsterGrabPosition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonsterGrabPosition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonsterGrabPosition__Class* get_class() {
            return il2cpp::get_class<app::MonsterGrabPosition__Class>(type_info(), "", "MonsterGrabPosition");
        }
        inline app::MonsterGrabPosition* create() {
            return il2cpp::create_object<app::MonsterGrabPosition>(get_class());
        }
    } // namespace MonsterGrabPosition
} // namespace app::classes::types
