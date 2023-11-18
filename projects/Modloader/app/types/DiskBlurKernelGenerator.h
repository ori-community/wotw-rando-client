#pragma once
#include <Modloader/app/structs/DiskBlurKernelGenerator.h>
#include <Modloader/app/structs/DiskBlurKernelGenerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DiskBlurKernelGenerator {
        inline app::DiskBlurKernelGenerator__Class** type_info() {
            static app::DiskBlurKernelGenerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DiskBlurKernelGenerator__Class**)(modloader::win::memory::resolve_rva(0x04708C30));
            }
            return cache;
        }
        inline app::DiskBlurKernelGenerator__Class* get_class() {
            return il2cpp::get_class<app::DiskBlurKernelGenerator__Class>(type_info(), "Moon.Rendering", "DiskBlurKernelGenerator");
        }
        inline app::DiskBlurKernelGenerator* create() {
            return il2cpp::create_object<app::DiskBlurKernelGenerator>(get_class());
        }
    } // namespace DiskBlurKernelGenerator
} // namespace app::classes::types
