#pragma once
#include <Modloader/app/structs/IDialogActor.h>
#include <Modloader/app/structs/IDialogActor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDialogActor {
        inline app::IDialogActor__Class** type_info() {
            static app::IDialogActor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IDialogActor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IDialogActor__Class* get_class() {
            return il2cpp::get_class<app::IDialogActor__Class>(type_info(), "", "IDialogActor");
        }
    } // namespace IDialogActor
} // namespace app::classes::types
