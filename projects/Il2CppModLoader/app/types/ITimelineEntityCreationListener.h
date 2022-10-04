#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITimelineEntityCreationListener {
        namespace {
            app::ITimelineEntityCreationListener__Class* type_info_ref = nullptr;
        }
        app::ITimelineEntityCreationListener__Class** type_info = &type_info_ref;
        inline app::ITimelineEntityCreationListener__Class* get_class() {
            return il2cpp::get_class<app::ITimelineEntityCreationListener__Class>(type_info, "Moon.Timeline", "ITimelineEntityCreationListener");
        }
        inline app::ITimelineEntityCreationListener* create() {
            return il2cpp::create_object<app::ITimelineEntityCreationListener>(get_class());
        }
    } // namespace ITimelineEntityCreationListener
} // namespace app::classes::types
