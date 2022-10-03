#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinerBuilderIdleBehaviour {
        namespace {
            app::MinerBuilderIdleBehaviour__Class* type_info_ref = nullptr;
        }
        app::MinerBuilderIdleBehaviour__Class** type_info = &type_info_ref;
        inline app::MinerBuilderIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MinerBuilderIdleBehaviour__Class>(type_info, "", "MinerBuilderIdleBehaviour");
        }
        inline app::MinerBuilderIdleBehaviour* create() {
            return il2cpp::create_object<app::MinerBuilderIdleBehaviour>(get_class());
        }
    } // namespace MinerBuilderIdleBehaviour
} // namespace app::classes::types
