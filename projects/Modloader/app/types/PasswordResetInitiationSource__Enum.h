#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PasswordResetInitiationSource__Enum__Class.h>
#include <Modloader/app/structs/PasswordResetInitiationSource__Enum.h>

namespace app::classes::types {
    namespace PasswordResetInitiationSource__Enum {
        namespace {
            inline app::PasswordResetInitiationSource__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PasswordResetInitiationSource__Enum__Class** type_info = &type_info_ref;
        inline app::PasswordResetInitiationSource__Enum__Class* get_class() {
            return il2cpp::get_class<app::PasswordResetInitiationSource__Enum__Class>(type_info, "PlayFab.PlayStreamModels", "PasswordResetInitiationSource");
        }
        inline app::PasswordResetInitiationSource__Enum* create() {
            return il2cpp::create_object<app::PasswordResetInitiationSource__Enum>(get_class());
        }
    } // namespace PasswordResetInitiationSource__Enum
} // namespace app::classes::types
