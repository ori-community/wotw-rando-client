#pragma once
#include <Modloader/app/structs/IBlackboard.h>
#include <Modloader/app/structs/IBlackboard__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IBlackboard {
        inline app::IBlackboard__Class** type_info() {
            static app::IBlackboard__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IBlackboard__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IBlackboard__Class* get_class() {
            return il2cpp::get_class<app::IBlackboard__Class>(type_info(), "Moon.BehaviourSystem", "IBlackboard");
        }
    } // namespace IBlackboard
} // namespace app::classes::types
