#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISliceRenderSettingsInfluencer {
        inline app::ISliceRenderSettingsInfluencer__Class** type_info = (app::ISliceRenderSettingsInfluencer__Class**)(modloader::win::memory::resolve_rva(0x0476C4A8));
        inline app::ISliceRenderSettingsInfluencer__Class* get_class() {
            return il2cpp::get_class<app::ISliceRenderSettingsInfluencer__Class>(type_info, "Moon.Rendering", "ISliceRenderSettingsInfluencer");
        }
        inline app::ISliceRenderSettingsInfluencer__Array* create_array(int size) {
            return il2cpp::array_new<app::ISliceRenderSettingsInfluencer__Array>(get_class(), size);
        }
        inline app::ISliceRenderSettingsInfluencer__Array* create_array(const std::vector<app::ISliceRenderSettingsInfluencer*>& items) {
            return il2cpp::array_new<app::ISliceRenderSettingsInfluencer__Array>(get_class(), items);
        }
    } // namespace ISliceRenderSettingsInfluencer
} // namespace app::classes::types
