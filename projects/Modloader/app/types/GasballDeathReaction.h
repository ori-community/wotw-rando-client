#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GasballDeathReaction__Class.h>
#include <Modloader/app/structs/GasballDeathReaction.h>

namespace app::classes::types {
    namespace GasballDeathReaction {
        namespace {
            inline app::GasballDeathReaction__Class* type_info_ref = nullptr;
        }
        inline app::GasballDeathReaction__Class** type_info = &type_info_ref;
        inline app::GasballDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::GasballDeathReaction__Class>(type_info, "", "GasballDeathReaction");
        }
        inline app::GasballDeathReaction* create() {
            return il2cpp::create_object<app::GasballDeathReaction>(get_class());
        }
    } // namespace GasballDeathReaction
} // namespace app::classes::types
