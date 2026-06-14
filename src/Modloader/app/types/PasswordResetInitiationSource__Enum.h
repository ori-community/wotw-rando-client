#pragma once
#include <Modloader/app/structs/PasswordResetInitiationSource__Enum.h>
#include <Modloader/app/structs/PasswordResetInitiationSource__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PasswordResetInitiationSource__Enum {
        inline app::PasswordResetInitiationSource__Enum__Class** type_info() {
            static app::PasswordResetInitiationSource__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PasswordResetInitiationSource__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PasswordResetInitiationSource__Enum__Class* get_class() {
            return il2cpp::get_class<app::PasswordResetInitiationSource__Enum__Class>(type_info(), "PlayFab.PlayStreamModels", "PasswordResetInitiationSource");
        }
        inline app::PasswordResetInitiationSource__Enum* create() {
            return il2cpp::create_object<app::PasswordResetInitiationSource__Enum>(get_class());
        }
    } // namespace PasswordResetInitiationSource__Enum
} // namespace app::classes::types
