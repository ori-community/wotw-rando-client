#pragma once
#include <Modloader/app/structs/MistTorch.h>
#include <Modloader/app/structs/MistTorch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MistTorch {
        inline app::MistTorch__Class** type_info() {
            static app::MistTorch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MistTorch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MistTorch__Class* get_class() {
            return il2cpp::get_class<app::MistTorch__Class>(type_info(), "", "MistTorch");
        }
        inline app::MistTorch* create() {
            return il2cpp::create_object<app::MistTorch>(get_class());
        }
    } // namespace MistTorch
} // namespace app::classes::types
