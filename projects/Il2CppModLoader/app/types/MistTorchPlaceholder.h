#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MistTorchPlaceholder {
        namespace {
            app::MistTorchPlaceholder__Class* type_info_ref = nullptr;
        }
        app::MistTorchPlaceholder__Class** type_info = &type_info_ref;
        inline app::MistTorchPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::MistTorchPlaceholder__Class>(type_info, "", "MistTorchPlaceholder");
        }
        inline app::MistTorchPlaceholder* create() {
            return il2cpp::create_object<app::MistTorchPlaceholder>(get_class());
        }
    } // namespace MistTorchPlaceholder
} // namespace app::classes::types
