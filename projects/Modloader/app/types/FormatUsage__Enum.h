#pragma once
#include <Modloader/app/structs/FormatUsage__Enum.h>
#include <Modloader/app/structs/FormatUsage__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FormatUsage__Enum {
        inline app::FormatUsage__Enum__Class** type_info() {
            static app::FormatUsage__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FormatUsage__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472F770));
            }
            return cache;
        }
        inline app::FormatUsage__Enum__Class* get_class() {
            return il2cpp::get_class<app::FormatUsage__Enum__Class>(type_info(), "UnityEngine.Experimental.Rendering", "FormatUsage");
        }
        inline app::FormatUsage__Enum* create() {
            return il2cpp::create_object<app::FormatUsage__Enum>(get_class());
        }
    } // namespace FormatUsage__Enum
} // namespace app::classes::types
