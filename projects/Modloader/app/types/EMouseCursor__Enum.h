#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EMouseCursor__Enum__Class.h>
#include <Modloader/app/structs/EMouseCursor__Enum.h>

namespace app::classes::types {
    namespace EMouseCursor__Enum {
        namespace {
            inline app::EMouseCursor__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EMouseCursor__Enum__Class** type_info = &type_info_ref;
        inline app::EMouseCursor__Enum__Class* get_class() {
            return il2cpp::get_class<app::EMouseCursor__Enum__Class>(type_info, "Steamworks", "EMouseCursor");
        }
        inline app::EMouseCursor__Enum* create() {
            return il2cpp::create_object<app::EMouseCursor__Enum>(get_class());
        }
    } // namespace EMouseCursor__Enum
} // namespace app::classes::types
