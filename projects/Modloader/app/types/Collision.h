#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Collision {
        namespace {
            inline app::Collision__Class* type_info_ref = nullptr;
        }
        inline app::Collision__Class** type_info = &type_info_ref;
        inline app::Collision__Class* get_class() {
            return il2cpp::get_class<app::Collision__Class>(type_info, "UnityEngine", "Collision");
        }
        inline app::Collision* create() {
            return il2cpp::create_object<app::Collision>(get_class());
        }
    } // namespace Collision
} // namespace app::classes::types
