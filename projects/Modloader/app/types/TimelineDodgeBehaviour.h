#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineDodgeBehaviour {
        namespace {
            inline app::TimelineDodgeBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::TimelineDodgeBehaviour__Class** type_info = &type_info_ref;
        inline app::TimelineDodgeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TimelineDodgeBehaviour__Class>(type_info, "Moon", "TimelineDodgeBehaviour");
        }
        inline app::TimelineDodgeBehaviour* create() {
            return il2cpp::create_object<app::TimelineDodgeBehaviour>(get_class());
        }
    } // namespace TimelineDodgeBehaviour
} // namespace app::classes::types
