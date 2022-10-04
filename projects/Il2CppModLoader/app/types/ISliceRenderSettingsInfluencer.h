#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISliceRenderSettingsInfluencer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISliceRenderSettingsInfluencer__Class** type_info;
        inline app::ISliceRenderSettingsInfluencer__Class* get_class() {
            return il2cpp::get_class<app::ISliceRenderSettingsInfluencer__Class>(type_info, "Moon.Rendering", "ISliceRenderSettingsInfluencer");
        }
        inline app::ISliceRenderSettingsInfluencer__Array* create_array(int size) {
            return il2cpp::array_new<app::ISliceRenderSettingsInfluencer__Array>(get_class(), size);
        }
    } // namespace ISliceRenderSettingsInfluencer
} // namespace app::classes::types
