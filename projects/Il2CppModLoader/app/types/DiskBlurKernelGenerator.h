#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DiskBlurKernelGenerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DiskBlurKernelGenerator__Class** type_info;
        inline app::DiskBlurKernelGenerator__Class* get_class() {
            return il2cpp::get_class<app::DiskBlurKernelGenerator__Class>(type_info, "Moon.Rendering", "DiskBlurKernelGenerator");
        }
        inline app::DiskBlurKernelGenerator* create() {
            return il2cpp::create_object<app::DiskBlurKernelGenerator>(get_class());
        }
    } // namespace DiskBlurKernelGenerator
} // namespace app::classes::types
