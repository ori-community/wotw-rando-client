#pragma once
#include <Modloader/app/structs/StompPost.h>
#include <Modloader/app/structs/StompPost__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StompPost {
        inline app::StompPost__Class** type_info() {
            static app::StompPost__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StompPost__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StompPost__Class* get_class() {
            return il2cpp::get_class<app::StompPost__Class>(type_info(), "", "StompPost");
        }
        inline app::StompPost* create() {
            return il2cpp::create_object<app::StompPost>(get_class());
        }
    } // namespace StompPost
} // namespace app::classes::types
