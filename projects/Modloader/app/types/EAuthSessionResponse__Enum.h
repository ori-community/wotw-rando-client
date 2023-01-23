#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EAuthSessionResponse__Enum__Class.h>
#include <Modloader/app/structs/EAuthSessionResponse__Enum.h>

namespace app::classes::types {
    namespace EAuthSessionResponse__Enum {
        namespace {
            inline app::EAuthSessionResponse__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EAuthSessionResponse__Enum__Class** type_info = &type_info_ref;
        inline app::EAuthSessionResponse__Enum__Class* get_class() {
            return il2cpp::get_class<app::EAuthSessionResponse__Enum__Class>(type_info, "Steamworks", "EAuthSessionResponse");
        }
        inline app::EAuthSessionResponse__Enum* create() {
            return il2cpp::create_object<app::EAuthSessionResponse__Enum>(get_class());
        }
    } // namespace EAuthSessionResponse__Enum
} // namespace app::classes::types
