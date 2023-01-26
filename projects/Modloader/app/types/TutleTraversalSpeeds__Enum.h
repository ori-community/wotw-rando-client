#pragma once
#include <Modloader/app/structs/TutleTraversalSpeeds__Enum.h>
#include <Modloader/app/structs/TutleTraversalSpeeds__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TutleTraversalSpeeds__Enum {
        inline app::TutleTraversalSpeeds__Enum__Class** type_info() {
            static app::TutleTraversalSpeeds__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TutleTraversalSpeeds__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TutleTraversalSpeeds__Enum__Class* get_class() {
            return il2cpp::get_class<app::TutleTraversalSpeeds__Enum__Class>(type_info(), "", "TutleTraversalSpeeds");
        }
        inline app::TutleTraversalSpeeds__Enum* create() {
            return il2cpp::create_object<app::TutleTraversalSpeeds__Enum>(get_class());
        }
    } // namespace TutleTraversalSpeeds__Enum
} // namespace app::classes::types
