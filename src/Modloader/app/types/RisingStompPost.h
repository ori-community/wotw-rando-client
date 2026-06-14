#pragma once
#include <Modloader/app/structs/RisingStompPost.h>
#include <Modloader/app/structs/RisingStompPost__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RisingStompPost {
        inline app::RisingStompPost__Class** type_info() {
            static app::RisingStompPost__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RisingStompPost__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RisingStompPost__Class* get_class() {
            return il2cpp::get_class<app::RisingStompPost__Class>(type_info(), "", "RisingStompPost");
        }
        inline app::RisingStompPost* create() {
            return il2cpp::create_object<app::RisingStompPost>(get_class());
        }
    } // namespace RisingStompPost
} // namespace app::classes::types
