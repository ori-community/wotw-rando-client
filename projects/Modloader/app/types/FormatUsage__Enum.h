#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FormatUsage__Enum {
        inline app::FormatUsage__Enum__Class** type_info = (app::FormatUsage__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472F770));
        inline app::FormatUsage__Enum__Class* get_class() {
            return il2cpp::get_class<app::FormatUsage__Enum__Class>(type_info, "UnityEngine.Experimental.Rendering", "FormatUsage");
        }
        inline app::FormatUsage__Enum* create() {
            return il2cpp::create_object<app::FormatUsage__Enum>(get_class());
        }
    } // namespace FormatUsage__Enum
} // namespace app::classes::types
