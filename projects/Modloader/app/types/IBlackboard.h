#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IBlackboard__Class.h>

namespace app::classes::types {
    namespace IBlackboard {
        namespace {
            inline app::IBlackboard__Class* type_info_ref = nullptr;
        }
        inline app::IBlackboard__Class** type_info = &type_info_ref;
        inline app::IBlackboard__Class* get_class() {
            return il2cpp::get_class<app::IBlackboard__Class>(type_info, "Moon.BehaviourSystem", "IBlackboard");
        }
    } // namespace IBlackboard
} // namespace app::classes::types
