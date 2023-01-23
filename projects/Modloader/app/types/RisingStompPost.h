#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RisingStompPost__Class.h>
#include <Modloader/app/structs/RisingStompPost.h>

namespace app::classes::types {
    namespace RisingStompPost {
        namespace {
            inline app::RisingStompPost__Class* type_info_ref = nullptr;
        }
        inline app::RisingStompPost__Class** type_info = &type_info_ref;
        inline app::RisingStompPost__Class* get_class() {
            return il2cpp::get_class<app::RisingStompPost__Class>(type_info, "", "RisingStompPost");
        }
        inline app::RisingStompPost* create() {
            return il2cpp::create_object<app::RisingStompPost>(get_class());
        }
    } // namespace RisingStompPost
} // namespace app::classes::types
