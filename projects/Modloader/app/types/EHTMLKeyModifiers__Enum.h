#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EHTMLKeyModifiers__Enum {
        namespace {
            inline app::EHTMLKeyModifiers__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EHTMLKeyModifiers__Enum__Class** type_info = &type_info_ref;
        inline app::EHTMLKeyModifiers__Enum__Class* get_class() {
            return il2cpp::get_class<app::EHTMLKeyModifiers__Enum__Class>(type_info, "Steamworks", "EHTMLKeyModifiers");
        }
        inline app::EHTMLKeyModifiers__Enum* create() {
            return il2cpp::create_object<app::EHTMLKeyModifiers__Enum>(get_class());
        }
    } // namespace EHTMLKeyModifiers__Enum
} // namespace app::classes::types
