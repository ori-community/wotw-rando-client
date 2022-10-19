#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Convolution3x3 {
        namespace {
            inline app::Convolution3x3__Class* type_info_ref = nullptr;
        }
        inline app::Convolution3x3__Class** type_info = &type_info_ref;
        inline app::Convolution3x3__Class* get_class() {
            return il2cpp::get_class<app::Convolution3x3__Class>(type_info, "Colorful", "Convolution3x3");
        }
        inline app::Convolution3x3* create() {
            return il2cpp::create_object<app::Convolution3x3>(get_class());
        }
    } // namespace Convolution3x3
} // namespace app::classes::types
