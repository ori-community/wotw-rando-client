#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AreaMapObjectiveArrow {
        namespace {
            inline app::AreaMapObjectiveArrow__Class* type_info_ref = nullptr;
        }
        inline app::AreaMapObjectiveArrow__Class** type_info = &type_info_ref;
        inline app::AreaMapObjectiveArrow__Class* get_class() {
            return il2cpp::get_class<app::AreaMapObjectiveArrow__Class>(type_info, "", "AreaMapObjectiveArrow");
        }
        inline app::AreaMapObjectiveArrow* create() {
            return il2cpp::create_object<app::AreaMapObjectiveArrow>(get_class());
        }
    } // namespace AreaMapObjectiveArrow
} // namespace app::classes::types
