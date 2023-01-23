#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MortarDeathReaction__Class.h>
#include <Modloader/app/structs/MortarDeathReaction.h>

namespace app::classes::types {
    namespace MortarDeathReaction {
        namespace {
            inline app::MortarDeathReaction__Class* type_info_ref = nullptr;
        }
        inline app::MortarDeathReaction__Class** type_info = &type_info_ref;
        inline app::MortarDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::MortarDeathReaction__Class>(type_info, "", "MortarDeathReaction");
        }
        inline app::MortarDeathReaction* create() {
            return il2cpp::create_object<app::MortarDeathReaction>(get_class());
        }
    } // namespace MortarDeathReaction
} // namespace app::classes::types
