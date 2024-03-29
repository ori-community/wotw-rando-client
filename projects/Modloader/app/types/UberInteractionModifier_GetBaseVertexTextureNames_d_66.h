#pragma once
#include <Modloader/app/structs/UberInteractionModifier_GetBaseVertexTextureNames_d_66.h>
#include <Modloader/app/structs/UberInteractionModifier_GetBaseVertexTextureNames_d_66__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberInteractionModifier_GetBaseVertexTextureNames_d_66 {
        inline app::UberInteractionModifier_GetBaseVertexTextureNames_d_66__Class** type_info() {
            static app::UberInteractionModifier_GetBaseVertexTextureNames_d_66__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberInteractionModifier_GetBaseVertexTextureNames_d_66__Class**)(modloader::win::memory::resolve_rva(0x0478E0A8));
            }
            return cache;
        }
        inline app::UberInteractionModifier_GetBaseVertexTextureNames_d_66__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionModifier_GetBaseVertexTextureNames_d_66__Class>(type_info(), "", "UberInteractionModifier", "<GetBaseVertexTextureNames>d__66");
        }
        inline app::UberInteractionModifier_GetBaseVertexTextureNames_d_66* create() {
            return il2cpp::create_object<app::UberInteractionModifier_GetBaseVertexTextureNames_d_66>(get_class());
        }
    } // namespace UberInteractionModifier_GetBaseVertexTextureNames_d_66
} // namespace app::classes::types
