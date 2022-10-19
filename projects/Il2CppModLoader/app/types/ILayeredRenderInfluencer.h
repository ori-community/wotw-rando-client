#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ILayeredRenderInfluencer {
        inline app::ILayeredRenderInfluencer__Class** type_info = (app::ILayeredRenderInfluencer__Class**)(modloader::win::memory::resolve_rva(0x0472B638));
        inline app::ILayeredRenderInfluencer__Class* get_class() {
            return il2cpp::get_class<app::ILayeredRenderInfluencer__Class>(type_info, "Moon.Rendering", "ILayeredRenderInfluencer");
        }
        inline app::ILayeredRenderInfluencer__Array* create_array(int size) {
            return il2cpp::array_new<app::ILayeredRenderInfluencer__Array>(get_class(), size);
        }
        inline app::ILayeredRenderInfluencer__Array* create_array(const std::vector<app::ILayeredRenderInfluencer*>& items) {
            return il2cpp::array_new<app::ILayeredRenderInfluencer__Array>(get_class(), items);
        }
    } // namespace ILayeredRenderInfluencer
} // namespace app::classes::types
