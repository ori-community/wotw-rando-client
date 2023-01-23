#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EResult__Enum__Class.h>
#include <Modloader/app/structs/EResult__Enum.h>

namespace app::classes::types {
    namespace EResult__Enum {
        namespace {
            inline app::EResult__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EResult__Enum__Class** type_info = &type_info_ref;
        inline app::EResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::EResult__Enum__Class>(type_info, "Steamworks", "EResult");
        }
        inline app::EResult__Enum* create() {
            return il2cpp::create_object<app::EResult__Enum>(get_class());
        }
    } // namespace EResult__Enum
} // namespace app::classes::types
