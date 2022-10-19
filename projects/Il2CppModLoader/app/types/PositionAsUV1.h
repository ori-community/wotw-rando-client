#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PositionAsUV1 {
        namespace {
            inline app::PositionAsUV1__Class* type_info_ref = nullptr;
        }
        inline app::PositionAsUV1__Class** type_info = &type_info_ref;
        inline app::PositionAsUV1__Class* get_class() {
            return il2cpp::get_class<app::PositionAsUV1__Class>(type_info, "UnityEngine.UI", "PositionAsUV1");
        }
        inline app::PositionAsUV1* create() {
            return il2cpp::create_object<app::PositionAsUV1>(get_class());
        }
    } // namespace PositionAsUV1
} // namespace app::classes::types
