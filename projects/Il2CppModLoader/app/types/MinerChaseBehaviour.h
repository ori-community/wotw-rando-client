#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinerChaseBehaviour {
        namespace {
            app::MinerChaseBehaviour__Class* type_info_ref = nullptr;
        }
        app::MinerChaseBehaviour__Class** type_info = &type_info_ref;
        inline app::MinerChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MinerChaseBehaviour__Class>(type_info, "", "MinerChaseBehaviour");
        }
        inline app::MinerChaseBehaviour* create() {
            return il2cpp::create_object<app::MinerChaseBehaviour>(get_class());
        }
    } // namespace MinerChaseBehaviour
} // namespace app::classes::types
