#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TutleTraversalSpeeds__Enum {
        namespace {
            app::TutleTraversalSpeeds__Enum__Class* type_info_ref = nullptr;
        }
        app::TutleTraversalSpeeds__Enum__Class** type_info = &type_info_ref;
        inline app::TutleTraversalSpeeds__Enum__Class* get_class() {
            return il2cpp::get_class<app::TutleTraversalSpeeds__Enum__Class>(type_info, "", "TutleTraversalSpeeds");
        }
        inline app::TutleTraversalSpeeds__Enum* create() {
            return il2cpp::create_object<app::TutleTraversalSpeeds__Enum>(get_class());
        }
    } // namespace TutleTraversalSpeeds__Enum
} // namespace app::classes::types
