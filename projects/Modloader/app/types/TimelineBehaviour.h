#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineBehaviour {
        namespace {
            inline app::TimelineBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::TimelineBehaviour__Class** type_info = &type_info_ref;
        inline app::TimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TimelineBehaviour__Class>(type_info, "", "TimelineBehaviour");
        }
        inline app::TimelineBehaviour* create() {
            return il2cpp::create_object<app::TimelineBehaviour>(get_class());
        }
    } // namespace TimelineBehaviour
} // namespace app::classes::types
