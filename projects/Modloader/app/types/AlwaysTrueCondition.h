#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AlwaysTrueCondition__Class.h>
#include <Modloader/app/structs/AlwaysTrueCondition.h>

namespace app::classes::types {
    namespace AlwaysTrueCondition {
        namespace {
            inline app::AlwaysTrueCondition__Class* type_info_ref = nullptr;
        }
        inline app::AlwaysTrueCondition__Class** type_info = &type_info_ref;
        inline app::AlwaysTrueCondition__Class* get_class() {
            return il2cpp::get_class<app::AlwaysTrueCondition__Class>(type_info, "Moon.InteractionGraph", "AlwaysTrueCondition");
        }
        inline app::AlwaysTrueCondition* create() {
            return il2cpp::create_object<app::AlwaysTrueCondition>(get_class());
        }
    } // namespace AlwaysTrueCondition
} // namespace app::classes::types
