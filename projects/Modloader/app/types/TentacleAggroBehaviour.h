#pragma once
#include <Modloader/app/structs/TentacleAggroBehaviour.h>
#include <Modloader/app/structs/TentacleAggroBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleAggroBehaviour {
        inline app::TentacleAggroBehaviour__Class** type_info() {
            static app::TentacleAggroBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleAggroBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleAggroBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TentacleAggroBehaviour__Class>(type_info(), "Moon", "TentacleAggroBehaviour");
        }
        inline app::TentacleAggroBehaviour* create() {
            return il2cpp::create_object<app::TentacleAggroBehaviour>(get_class());
        }
    } // namespace TentacleAggroBehaviour
} // namespace app::classes::types
