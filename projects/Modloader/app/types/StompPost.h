#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StompPost {
        namespace {
            inline app::StompPost__Class* type_info_ref = nullptr;
        }
        inline app::StompPost__Class** type_info = &type_info_ref;
        inline app::StompPost__Class* get_class() {
            return il2cpp::get_class<app::StompPost__Class>(type_info, "", "StompPost");
        }
        inline app::StompPost* create() {
            return il2cpp::create_object<app::StompPost>(get_class());
        }
    } // namespace StompPost
} // namespace app::classes::types
