#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleAggroBehaviour {
        namespace {
            inline app::TentacleAggroBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::TentacleAggroBehaviour__Class** type_info = &type_info_ref;
        inline app::TentacleAggroBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TentacleAggroBehaviour__Class>(type_info, "Moon", "TentacleAggroBehaviour");
        }
        inline app::TentacleAggroBehaviour* create() {
            return il2cpp::create_object<app::TentacleAggroBehaviour>(get_class());
        }
    } // namespace TentacleAggroBehaviour
} // namespace app::classes::types
