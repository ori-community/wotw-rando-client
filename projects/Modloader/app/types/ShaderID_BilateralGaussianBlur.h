#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_BilateralGaussianBlur {
        inline app::ShaderID_BilateralGaussianBlur__Class** type_info = (app::ShaderID_BilateralGaussianBlur__Class**)(modloader::win::memory::resolve_rva(0x04729E78));
        inline app::ShaderID_BilateralGaussianBlur__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_BilateralGaussianBlur__Class>(type_info, "Colorful", "ShaderID_BilateralGaussianBlur");
        }
        inline app::ShaderID_BilateralGaussianBlur* create() {
            return il2cpp::create_object<app::ShaderID_BilateralGaussianBlur>(get_class());
        }
    } // namespace ShaderID_BilateralGaussianBlur
} // namespace app::classes::types
