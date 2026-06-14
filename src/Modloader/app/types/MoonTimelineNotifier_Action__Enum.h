#pragma once
#include <Modloader/app/structs/MoonTimelineNotifier_Action__Enum.h>
#include <Modloader/app/structs/MoonTimelineNotifier_Action__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTimelineNotifier_Action__Enum {
        inline app::MoonTimelineNotifier_Action__Enum__Class** type_info() {
            static app::MoonTimelineNotifier_Action__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTimelineNotifier_Action__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTimelineNotifier_Action__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTimelineNotifier_Action__Enum__Class>(type_info(), "Moon.Timeline", "MoonTimelineNotifier", "Action");
        }
        inline app::MoonTimelineNotifier_Action__Enum* create() {
            return il2cpp::create_object<app::MoonTimelineNotifier_Action__Enum>(get_class());
        }
    } // namespace MoonTimelineNotifier_Action__Enum
} // namespace app::classes::types
