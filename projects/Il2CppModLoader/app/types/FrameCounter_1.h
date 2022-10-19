#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FrameCounter_1 {
        namespace {
            inline app::FrameCounter_1__Class* type_info_ref = nullptr;
        }
        inline app::FrameCounter_1__Class** type_info = &type_info_ref;
        inline app::FrameCounter_1__Class* get_class() {
            return il2cpp::get_class<app::FrameCounter_1__Class>(type_info, "Moon", "FrameCounter");
        }
        inline app::FrameCounter_1* create() {
            return il2cpp::create_object<app::FrameCounter_1>(get_class());
        }
    } // namespace FrameCounter_1
} // namespace app::classes::types
