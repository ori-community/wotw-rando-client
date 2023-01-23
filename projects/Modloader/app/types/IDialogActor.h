#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IDialogActor__Class.h>

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
