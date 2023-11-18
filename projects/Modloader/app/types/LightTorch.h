#pragma once
#include <Modloader/app/structs/LightTorch.h>
#include <Modloader/app/structs/LightTorch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightTorch {
        inline app::LightTorch__Class** type_info() {
            static app::LightTorch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightTorch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightTorch__Class* get_class() {
            return il2cpp::get_class<app::LightTorch__Class>(type_info(), "", "LightTorch");
        }
        inline app::LightTorch* create() {
            return il2cpp::create_object<app::LightTorch>(get_class());
        }
    } // namespace LightTorch
} // namespace app::classes::types
