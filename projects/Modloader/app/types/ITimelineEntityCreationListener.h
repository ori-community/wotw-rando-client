#pragma once
#include <Modloader/app/structs/ITimelineEntityCreationListener.h>
#include <Modloader/app/structs/ITimelineEntityCreationListener__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITimelineEntityCreationListener {
        inline app::ITimelineEntityCreationListener__Class** type_info() {
            static app::ITimelineEntityCreationListener__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ITimelineEntityCreationListener__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ITimelineEntityCreationListener__Class* get_class() {
            return il2cpp::get_class<app::ITimelineEntityCreationListener__Class>(type_info(), "Moon.Timeline", "ITimelineEntityCreationListener");
        }
    } // namespace ITimelineEntityCreationListener
} // namespace app::classes::types
