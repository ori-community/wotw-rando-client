#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EBeginAuthSessionResult__Enum__Class.h>
#include <Modloader/app/structs/EBeginAuthSessionResult__Enum.h>

namespace app::classes::types {
    namespace EBeginAuthSessionResult__Enum {
        namespace {
            inline app::EBeginAuthSessionResult__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EBeginAuthSessionResult__Enum__Class** type_info = &type_info_ref;
        inline app::EBeginAuthSessionResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::EBeginAuthSessionResult__Enum__Class>(type_info, "Steamworks", "EBeginAuthSessionResult");
        }
        inline app::EBeginAuthSessionResult__Enum* create() {
            return il2cpp::create_object<app::EBeginAuthSessionResult__Enum>(get_class());
        }
    } // namespace EBeginAuthSessionResult__Enum
} // namespace app::classes::types
