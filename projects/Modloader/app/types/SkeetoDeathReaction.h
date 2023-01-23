#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SkeetoDeathReaction__Class.h>
#include <Modloader/app/structs/SkeetoDeathReaction.h>

namespace app::classes::types {
    namespace SkeetoDeathReaction {
        namespace {
            inline app::SkeetoDeathReaction__Class* type_info_ref = nullptr;
        }
        inline app::SkeetoDeathReaction__Class** type_info = &type_info_ref;
        inline app::SkeetoDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::SkeetoDeathReaction__Class>(type_info, "", "SkeetoDeathReaction");
        }
        inline app::SkeetoDeathReaction* create() {
            return il2cpp::create_object<app::SkeetoDeathReaction>(get_class());
        }
    } // namespace SkeetoDeathReaction
} // namespace app::classes::types
