#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StringSplitOptions__Enum {
        inline app::StringSplitOptions__Enum__Class** type_info = (app::StringSplitOptions__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471BCE0));
        inline app::StringSplitOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::StringSplitOptions__Enum__Class>(type_info, "System", "StringSplitOptions");
        }
        inline app::StringSplitOptions__Enum* create() {
            return il2cpp::create_object<app::StringSplitOptions__Enum>(get_class());
        }
    } // namespace StringSplitOptions__Enum
} // namespace app::classes::types
