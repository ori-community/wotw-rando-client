#pragma once
#include <Modloader/app/structs/ShaderTimeUtils.h>
#include <Modloader/app/structs/ShaderTimeUtils__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderTimeUtils {
        inline app::ShaderTimeUtils__Class** type_info() {
            static app::ShaderTimeUtils__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderTimeUtils__Class**)(modloader::win::memory::resolve_rva(0x047167D0));
            }
            return cache;
        }
        inline app::ShaderTimeUtils__Class* get_class() {
            return il2cpp::get_class<app::ShaderTimeUtils__Class>(type_info(), "Moon", "ShaderTimeUtils");
        }
        inline app::ShaderTimeUtils* create() {
            return il2cpp::create_object<app::ShaderTimeUtils>(get_class());
        }
    } // namespace ShaderTimeUtils
} // namespace app::classes::types
