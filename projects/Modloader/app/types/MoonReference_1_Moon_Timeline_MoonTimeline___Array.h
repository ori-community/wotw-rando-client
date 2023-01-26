#pragma once
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline___Array.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonReference_1_Moon_Timeline_MoonTimeline___Array {
        inline app::MoonReference_1_Moon_Timeline_MoonTimeline___Array__Class** type_info() {
            static app::MoonReference_1_Moon_Timeline_MoonTimeline___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonReference_1_Moon_Timeline_MoonTimeline___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonReference_1_Moon_Timeline_MoonTimeline___Array__Class* get_class() {
            return il2cpp::get_class<app::MoonReference_1_Moon_Timeline_MoonTimeline___Array__Class>(type_info(), "Moon", "MoonReference`1[Moon.Timeline.MoonTimeline][]");
        }
        inline app::MoonReference_1_Moon_Timeline_MoonTimeline___Array* create() {
            return il2cpp::create_object<app::MoonReference_1_Moon_Timeline_MoonTimeline___Array>(get_class());
        }
    } // namespace MoonReference_1_Moon_Timeline_MoonTimeline___Array
} // namespace app::classes::types
