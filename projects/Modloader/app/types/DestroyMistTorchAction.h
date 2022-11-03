#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DestroyMistTorchAction {
        namespace {
            inline app::DestroyMistTorchAction__Class* type_info_ref = nullptr;
        }
        inline app::DestroyMistTorchAction__Class** type_info = &type_info_ref;
        inline app::DestroyMistTorchAction__Class* get_class() {
            return il2cpp::get_class<app::DestroyMistTorchAction__Class>(type_info, "", "DestroyMistTorchAction");
        }
        inline app::DestroyMistTorchAction* create() {
            return il2cpp::create_object<app::DestroyMistTorchAction>(get_class());
        }
    } // namespace DestroyMistTorchAction
} // namespace app::classes::types
