#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTimelineNotifier_Action__Enum {
        namespace {
            app::MoonTimelineNotifier_Action__Enum__Class* type_info_ref = nullptr;
        }
        app::MoonTimelineNotifier_Action__Enum__Class** type_info = &type_info_ref;
        inline app::MoonTimelineNotifier_Action__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTimelineNotifier_Action__Enum__Class>(type_info, "Moon.Timeline", "MoonTimelineNotifier", "Action");
        }
        inline app::MoonTimelineNotifier_Action__Enum* create() {
            return il2cpp::create_object<app::MoonTimelineNotifier_Action__Enum>(get_class());
        }
    } // namespace MoonTimelineNotifier_Action__Enum
} // namespace app::classes::types
