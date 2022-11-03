#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineEntityReference {
        namespace {
            inline app::TimelineEntityReference__Class* type_info_ref = nullptr;
        }
        inline app::TimelineEntityReference__Class** type_info = &type_info_ref;
        inline app::TimelineEntityReference__Class* get_class() {
            return il2cpp::get_class<app::TimelineEntityReference__Class>(type_info, "Moon.Timeline", "TimelineEntityReference");
        }
        inline app::TimelineEntityReference* create() {
            return il2cpp::create_object<app::TimelineEntityReference>(get_class());
        }
    } // namespace TimelineEntityReference
} // namespace app::classes::types
