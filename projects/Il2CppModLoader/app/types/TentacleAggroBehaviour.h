#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleAggroBehaviour {
        namespace {
            app::TentacleAggroBehaviour__Class* type_info_ref = nullptr;
        }
        app::TentacleAggroBehaviour__Class** type_info = &type_info_ref;
        inline app::TentacleAggroBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TentacleAggroBehaviour__Class>(type_info, "Moon", "TentacleAggroBehaviour");
        }
        inline app::TentacleAggroBehaviour* create() {
            return il2cpp::create_object<app::TentacleAggroBehaviour>(get_class());
        }
    } // namespace TentacleAggroBehaviour
} // namespace app::classes::types
