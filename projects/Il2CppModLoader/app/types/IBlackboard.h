#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IBlackboard {
        namespace {
            app::IBlackboard__Class* type_info_ref = nullptr;
        }
        app::IBlackboard__Class** type_info = &type_info_ref;
        inline app::IBlackboard__Class* get_class() {
            return il2cpp::get_class<app::IBlackboard__Class>(type_info, "Moon.BehaviourSystem", "IBlackboard");
        }
    } // namespace IBlackboard
} // namespace app::classes::types
