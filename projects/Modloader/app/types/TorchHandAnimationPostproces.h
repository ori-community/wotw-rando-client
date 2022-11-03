#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TorchHandAnimationPostproces {
        namespace {
            inline app::TorchHandAnimationPostproces__Class* type_info_ref = nullptr;
        }
        inline app::TorchHandAnimationPostproces__Class** type_info = &type_info_ref;
        inline app::TorchHandAnimationPostproces__Class* get_class() {
            return il2cpp::get_class<app::TorchHandAnimationPostproces__Class>(type_info, "", "TorchHandAnimationPostproces");
        }
        inline app::TorchHandAnimationPostproces* create() {
            return il2cpp::create_object<app::TorchHandAnimationPostproces>(get_class());
        }
    } // namespace TorchHandAnimationPostproces
} // namespace app::classes::types
