#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MathUtilities {
        inline app::MathUtilities__Class** type_info = (app::MathUtilities__Class**)(modloader::win::memory::resolve_rva(0x04770DA0));
        inline app::MathUtilities__Class* get_class() {
            return il2cpp::get_class<app::MathUtilities__Class>(type_info, "UberShader.SpriteSharp", "MathUtilities");
        }
        inline app::MathUtilities* create() {
            return il2cpp::create_object<app::MathUtilities>(get_class());
        }
    } // namespace MathUtilities
} // namespace app::classes::types
