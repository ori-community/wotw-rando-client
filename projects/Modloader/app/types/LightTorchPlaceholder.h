#pragma once
#include <Modloader/app/structs/LightTorchPlaceholder.h>
#include <Modloader/app/structs/LightTorchPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightTorchPlaceholder {
        inline app::LightTorchPlaceholder__Class** type_info() {
            static app::LightTorchPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightTorchPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightTorchPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::LightTorchPlaceholder__Class>(type_info(), "", "LightTorchPlaceholder");
        }
        inline app::LightTorchPlaceholder* create() {
            return il2cpp::create_object<app::LightTorchPlaceholder>(get_class());
        }
    } // namespace LightTorchPlaceholder
} // namespace app::classes::types
