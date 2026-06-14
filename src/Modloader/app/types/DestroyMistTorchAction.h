#pragma once
#include <Modloader/app/structs/DestroyMistTorchAction.h>
#include <Modloader/app/structs/DestroyMistTorchAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DestroyMistTorchAction {
        inline app::DestroyMistTorchAction__Class** type_info() {
            static app::DestroyMistTorchAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DestroyMistTorchAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DestroyMistTorchAction__Class* get_class() {
            return il2cpp::get_class<app::DestroyMistTorchAction__Class>(type_info(), "", "DestroyMistTorchAction");
        }
        inline app::DestroyMistTorchAction* create() {
            return il2cpp::create_object<app::DestroyMistTorchAction>(get_class());
        }
    } // namespace DestroyMistTorchAction
} // namespace app::classes::types
