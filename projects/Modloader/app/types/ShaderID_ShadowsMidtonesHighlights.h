#pragma once
#include <Modloader/app/structs/ShaderID_ShadowsMidtonesHighlights.h>
#include <Modloader/app/structs/ShaderID_ShadowsMidtonesHighlights__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ShadowsMidtonesHighlights {
        inline app::ShaderID_ShadowsMidtonesHighlights__Class** type_info() {
            static app::ShaderID_ShadowsMidtonesHighlights__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_ShadowsMidtonesHighlights__Class**)(modloader::win::memory::resolve_rva(0x04785E90));
            }
            return cache;
        }
        inline app::ShaderID_ShadowsMidtonesHighlights__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ShadowsMidtonesHighlights__Class>(type_info(), "Colorful", "ShaderID_ShadowsMidtonesHighlights");
        }
        inline app::ShaderID_ShadowsMidtonesHighlights* create() {
            return il2cpp::create_object<app::ShaderID_ShadowsMidtonesHighlights>(get_class());
        }
    } // namespace ShaderID_ShadowsMidtonesHighlights
} // namespace app::classes::types
