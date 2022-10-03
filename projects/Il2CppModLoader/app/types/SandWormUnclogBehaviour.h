#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormUnclogBehaviour {
        namespace {
            app::SandWormUnclogBehaviour__Class* type_info_ref = nullptr;
        }
        app::SandWormUnclogBehaviour__Class** type_info = &type_info_ref;
        inline app::SandWormUnclogBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormUnclogBehaviour__Class>(type_info, "", "SandWormUnclogBehaviour");
        }
        inline app::SandWormUnclogBehaviour* create() {
            return il2cpp::create_object<app::SandWormUnclogBehaviour>(get_class());
        }
    } // namespace SandWormUnclogBehaviour
} // namespace app::classes::types
