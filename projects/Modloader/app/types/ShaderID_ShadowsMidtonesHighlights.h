#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_ShadowsMidtonesHighlights__Class.h>
#include <Modloader/app/structs/ShaderID_ShadowsMidtonesHighlights.h>

namespace app::classes::types {
    namespace ShaderID_ShadowsMidtonesHighlights {
        inline app::ShaderID_ShadowsMidtonesHighlights__Class** type_info = (app::ShaderID_ShadowsMidtonesHighlights__Class**)(modloader::win::memory::resolve_rva(0x04785E90));
        inline app::ShaderID_ShadowsMidtonesHighlights__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ShadowsMidtonesHighlights__Class>(type_info, "Colorful", "ShaderID_ShadowsMidtonesHighlights");
        }
        inline app::ShaderID_ShadowsMidtonesHighlights* create() {
            return il2cpp::create_object<app::ShaderID_ShadowsMidtonesHighlights>(get_class());
        }
    } // namespace ShaderID_ShadowsMidtonesHighlights
} // namespace app::classes::types
