#pragma once
#include <Modloader/app/structs/EBeginAuthSessionResult__Enum.h>
#include <Modloader/app/structs/EBeginAuthSessionResult__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EBeginAuthSessionResult__Enum {
        inline app::EBeginAuthSessionResult__Enum__Class** type_info() {
            static app::EBeginAuthSessionResult__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EBeginAuthSessionResult__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EBeginAuthSessionResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::EBeginAuthSessionResult__Enum__Class>(type_info(), "Steamworks", "EBeginAuthSessionResult");
        }
        inline app::EBeginAuthSessionResult__Enum* create() {
            return il2cpp::create_object<app::EBeginAuthSessionResult__Enum>(get_class());
        }
    } // namespace EBeginAuthSessionResult__Enum
} // namespace app::classes::types
