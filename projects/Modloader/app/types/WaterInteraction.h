#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaterInteraction__Class.h>
#include <Modloader/app/structs/WaterInteraction.h>

namespace app::classes::types {
    namespace WaterInteraction {
        namespace {
            inline app::WaterInteraction__Class* type_info_ref = nullptr;
        }
        inline app::WaterInteraction__Class** type_info = &type_info_ref;
        inline app::WaterInteraction__Class* get_class() {
            return il2cpp::get_class<app::WaterInteraction__Class>(type_info, "", "WaterInteraction");
        }
        inline app::WaterInteraction* create() {
            return il2cpp::create_object<app::WaterInteraction>(get_class());
        }
    } // namespace WaterInteraction
} // namespace app::classes::types
