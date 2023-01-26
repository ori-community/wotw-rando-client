#pragma once
#include <Modloader/app/structs/MistTorchPlaceholder.h>
#include <Modloader/app/structs/MistTorchPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MistTorchPlaceholder {
        inline app::MistTorchPlaceholder__Class** type_info() {
            static app::MistTorchPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MistTorchPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MistTorchPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::MistTorchPlaceholder__Class>(type_info(), "", "MistTorchPlaceholder");
        }
        inline app::MistTorchPlaceholder* create() {
            return il2cpp::create_object<app::MistTorchPlaceholder>(get_class());
        }
    } // namespace MistTorchPlaceholder
} // namespace app::classes::types
