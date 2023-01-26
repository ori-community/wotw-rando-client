#pragma once
#include <Modloader/app/structs/Allocator__Enum.h>
#include <Modloader/app/structs/Allocator__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Allocator__Enum {
        inline app::Allocator__Enum__Class** type_info() {
            static app::Allocator__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Allocator__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Allocator__Enum__Class* get_class() {
            return il2cpp::get_class<app::Allocator__Enum__Class>(type_info(), "Unity.Collections", "Allocator");
        }
        inline app::Allocator__Enum* create() {
            return il2cpp::create_object<app::Allocator__Enum>(get_class());
        }
    } // namespace Allocator__Enum
} // namespace app::classes::types
