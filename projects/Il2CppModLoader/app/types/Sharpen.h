#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Sharpen {
        namespace {
            inline app::Sharpen__Class* type_info_ref = nullptr;
        }
        inline app::Sharpen__Class** type_info = &type_info_ref;
        inline app::Sharpen__Class* get_class() {
            return il2cpp::get_class<app::Sharpen__Class>(type_info, "Colorful", "Sharpen");
        }
        inline app::Sharpen* create() {
            return il2cpp::create_object<app::Sharpen>(get_class());
        }
    } // namespace Sharpen
} // namespace app::classes::types
