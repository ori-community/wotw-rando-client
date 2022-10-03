#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineBehaviour {
        namespace {
            app::TimelineBehaviour__Class* type_info_ref = nullptr;
        }
        app::TimelineBehaviour__Class** type_info = &type_info_ref;
        inline app::TimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TimelineBehaviour__Class>(type_info, "", "TimelineBehaviour");
        }
        inline app::TimelineBehaviour* create() {
            return il2cpp::create_object<app::TimelineBehaviour>(get_class());
        }
    } // namespace TimelineBehaviour
} // namespace app::classes::types
