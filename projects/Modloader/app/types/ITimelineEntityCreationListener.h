#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ITimelineEntityCreationListener__Class.h>

namespace app::classes::types {
    namespace ITimelineEntityCreationListener {
        namespace {
            inline app::ITimelineEntityCreationListener__Class* type_info_ref = nullptr;
        }
        inline app::ITimelineEntityCreationListener__Class** type_info = &type_info_ref;
        inline app::ITimelineEntityCreationListener__Class* get_class() {
            return il2cpp::get_class<app::ITimelineEntityCreationListener__Class>(type_info, "Moon.Timeline", "ITimelineEntityCreationListener");
        }
    } // namespace ITimelineEntityCreationListener
} // namespace app::classes::types
