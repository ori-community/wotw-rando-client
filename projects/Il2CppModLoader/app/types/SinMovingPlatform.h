#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SinMovingPlatform {
        namespace {
            inline app::SinMovingPlatform__Class* type_info_ref = nullptr;
        }
        inline app::SinMovingPlatform__Class** type_info = &type_info_ref;
        inline app::SinMovingPlatform__Class* get_class() {
            return il2cpp::get_class<app::SinMovingPlatform__Class>(type_info, "", "SinMovingPlatform");
        }
        inline app::SinMovingPlatform* create() {
            return il2cpp::create_object<app::SinMovingPlatform>(get_class());
        }
    } // namespace SinMovingPlatform
} // namespace app::classes::types
