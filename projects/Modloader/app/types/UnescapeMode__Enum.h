#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnescapeMode__Enum {
        namespace {
            inline app::UnescapeMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UnescapeMode__Enum__Class** type_info = &type_info_ref;
        inline app::UnescapeMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::UnescapeMode__Enum__Class>(type_info, "System", "UnescapeMode");
        }
        inline app::UnescapeMode__Enum* create() {
            return il2cpp::create_object<app::UnescapeMode__Enum>(get_class());
        }
    } // namespace UnescapeMode__Enum
} // namespace app::classes::types
