#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Allocator__Enum {
        namespace {
            inline app::Allocator__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Allocator__Enum__Class** type_info = &type_info_ref;
        inline app::Allocator__Enum__Class* get_class() {
            return il2cpp::get_class<app::Allocator__Enum__Class>(type_info, "Unity.Collections", "Allocator");
        }
        inline app::Allocator__Enum* create() {
            return il2cpp::create_object<app::Allocator__Enum>(get_class());
        }
    } // namespace Allocator__Enum
} // namespace app::classes::types
