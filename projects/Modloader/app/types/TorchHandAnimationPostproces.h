#pragma once
#include <Modloader/app/structs/TorchHandAnimationPostproces.h>
#include <Modloader/app/structs/TorchHandAnimationPostproces__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TorchHandAnimationPostproces {
        inline app::TorchHandAnimationPostproces__Class** type_info() {
            static app::TorchHandAnimationPostproces__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TorchHandAnimationPostproces__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TorchHandAnimationPostproces__Class* get_class() {
            return il2cpp::get_class<app::TorchHandAnimationPostproces__Class>(type_info(), "", "TorchHandAnimationPostproces");
        }
        inline app::TorchHandAnimationPostproces* create() {
            return il2cpp::create_object<app::TorchHandAnimationPostproces>(get_class());
        }
    } // namespace TorchHandAnimationPostproces
} // namespace app::classes::types
