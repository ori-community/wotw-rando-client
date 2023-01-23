#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UriSyntaxFlags__Enum__Class.h>
#include <Modloader/app/structs/UriSyntaxFlags__Enum.h>

namespace app::classes::types {
    namespace UriSyntaxFlags__Enum {
        namespace {
            inline app::UriSyntaxFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UriSyntaxFlags__Enum__Class** type_info = &type_info_ref;
        inline app::UriSyntaxFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::UriSyntaxFlags__Enum__Class>(type_info, "System", "UriSyntaxFlags");
        }
        inline app::UriSyntaxFlags__Enum* create() {
            return il2cpp::create_object<app::UriSyntaxFlags__Enum>(get_class());
        }
    } // namespace UriSyntaxFlags__Enum
} // namespace app::classes::types
