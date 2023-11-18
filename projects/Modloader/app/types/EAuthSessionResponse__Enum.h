#pragma once
#include <Modloader/app/structs/EAuthSessionResponse__Enum.h>
#include <Modloader/app/structs/EAuthSessionResponse__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EAuthSessionResponse__Enum {
        inline app::EAuthSessionResponse__Enum__Class** type_info() {
            static app::EAuthSessionResponse__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EAuthSessionResponse__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EAuthSessionResponse__Enum__Class* get_class() {
            return il2cpp::get_class<app::EAuthSessionResponse__Enum__Class>(type_info(), "Steamworks", "EAuthSessionResponse");
        }
        inline app::EAuthSessionResponse__Enum* create() {
            return il2cpp::create_object<app::EAuthSessionResponse__Enum>(get_class());
        }
    } // namespace EAuthSessionResponse__Enum
} // namespace app::classes::types
