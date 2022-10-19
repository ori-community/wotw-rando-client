#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDialogActor {
        namespace {
            inline app::IDialogActor__Class* type_info_ref = nullptr;
        }
        inline app::IDialogActor__Class** type_info = &type_info_ref;
        inline app::IDialogActor__Class* get_class() {
            return il2cpp::get_class<app::IDialogActor__Class>(type_info, "", "IDialogActor");
        }
    } // namespace IDialogActor
} // namespace app::classes::types
