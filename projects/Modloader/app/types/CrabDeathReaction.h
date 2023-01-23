#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CrabDeathReaction__Class.h>
#include <Modloader/app/structs/CrabDeathReaction.h>

namespace app::classes::types {
    namespace CrabDeathReaction {
        namespace {
            inline app::CrabDeathReaction__Class* type_info_ref = nullptr;
        }
        inline app::CrabDeathReaction__Class** type_info = &type_info_ref;
        inline app::CrabDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::CrabDeathReaction__Class>(type_info, "", "CrabDeathReaction");
        }
        inline app::CrabDeathReaction* create() {
            return il2cpp::create_object<app::CrabDeathReaction>(get_class());
        }
    } // namespace CrabDeathReaction
} // namespace app::classes::types
