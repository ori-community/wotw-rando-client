#pragma once
#include <Modloader/app/structs/SkeetoAirMoveBehaviour.h>
#include <Modloader/app/structs/SkeetoAirMoveBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoAirMoveBehaviour {
        inline app::SkeetoAirMoveBehaviour__Class** type_info() {
            static app::SkeetoAirMoveBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoAirMoveBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoAirMoveBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoAirMoveBehaviour__Class>(type_info(), "", "SkeetoAirMoveBehaviour");
        }
        inline app::SkeetoAirMoveBehaviour* create() {
            return il2cpp::create_object<app::SkeetoAirMoveBehaviour>(get_class());
        }
    } // namespace SkeetoAirMoveBehaviour
} // namespace app::classes::types
