#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DoubleVision {
        namespace {
            inline app::DoubleVision__Class* type_info_ref = nullptr;
        }
        inline app::DoubleVision__Class** type_info = &type_info_ref;
        inline app::DoubleVision__Class* get_class() {
            return il2cpp::get_class<app::DoubleVision__Class>(type_info, "Colorful", "DoubleVision");
        }
        inline app::DoubleVision* create() {
            return il2cpp::create_object<app::DoubleVision>(get_class());
        }
    } // namespace DoubleVision
} // namespace app::classes::types
