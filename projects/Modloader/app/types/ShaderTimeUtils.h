#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderTimeUtils {
        inline app::ShaderTimeUtils__Class** type_info = (app::ShaderTimeUtils__Class**)(modloader::win::memory::resolve_rva(0x047167D0));
        inline app::ShaderTimeUtils__Class* get_class() {
            return il2cpp::get_class<app::ShaderTimeUtils__Class>(type_info, "Moon", "ShaderTimeUtils");
        }
        inline app::ShaderTimeUtils* create() {
            return il2cpp::create_object<app::ShaderTimeUtils>(get_class());
        }
    } // namespace ShaderTimeUtils
} // namespace app::classes::types
