#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TorchHandAnimationPostproces {
        namespace {
            app::TorchHandAnimationPostproces__Class* type_info_ref = nullptr;
        }
        app::TorchHandAnimationPostproces__Class** type_info = &type_info_ref;
        inline app::TorchHandAnimationPostproces__Class* get_class() {
            return il2cpp::get_class<app::TorchHandAnimationPostproces__Class>(type_info, "", "TorchHandAnimationPostproces");
        }
        inline app::TorchHandAnimationPostproces* create() {
            return il2cpp::create_object<app::TorchHandAnimationPostproces>(get_class());
        }
    } // namespace TorchHandAnimationPostproces
} // namespace app::classes::types
