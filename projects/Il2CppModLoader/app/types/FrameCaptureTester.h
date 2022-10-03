#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrameCaptureTester {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FrameCaptureTester__Class** type_info;
        inline app::FrameCaptureTester__Class* get_class() {
            return il2cpp::get_class<app::FrameCaptureTester__Class>(type_info, "", "FrameCaptureTester");
        }
        inline app::FrameCaptureTester* create() {
            return il2cpp::create_object<app::FrameCaptureTester>(get_class());
        }
    } // namespace FrameCaptureTester
} // namespace app::classes::types
