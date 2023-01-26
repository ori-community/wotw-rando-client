#pragma once
#include <Modloader/app/structs/MinerBuilderDialogBehaviour.h>
#include <Modloader/app/structs/MinerBuilderDialogBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerBuilderDialogBehaviour {
        inline app::MinerBuilderDialogBehaviour__Class** type_info() {
            static app::MinerBuilderDialogBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinerBuilderDialogBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinerBuilderDialogBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MinerBuilderDialogBehaviour__Class>(type_info(), "", "MinerBuilderDialogBehaviour");
        }
        inline app::MinerBuilderDialogBehaviour* create() {
            return il2cpp::create_object<app::MinerBuilderDialogBehaviour>(get_class());
        }
    } // namespace MinerBuilderDialogBehaviour
} // namespace app::classes::types
