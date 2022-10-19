#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransparencyAnimatorSystemStrategy_RendererState {
        inline app::TransparencyAnimatorSystemStrategy_RendererState__Class** type_info = (app::TransparencyAnimatorSystemStrategy_RendererState__Class**)(modloader::win::memory::resolve_rva(0x04772B38));
        inline app::TransparencyAnimatorSystemStrategy_RendererState__Class* get_class() {
            return il2cpp::get_nested_class<app::TransparencyAnimatorSystemStrategy_RendererState__Class>(type_info, "Moon.Timeline", "TransparencyAnimatorSystemStrategy", "RendererState");
        }
        inline app::TransparencyAnimatorSystemStrategy_RendererState* create() {
            return il2cpp::create_object<app::TransparencyAnimatorSystemStrategy_RendererState>(get_class());
        }
        inline app::TransparencyAnimatorSystemStrategy_RendererState__Array* create_array(int size) {
            return il2cpp::array_new<app::TransparencyAnimatorSystemStrategy_RendererState__Array>(get_class(), size);
        }
        inline app::TransparencyAnimatorSystemStrategy_RendererState__Array* create_array(const std::vector<app::TransparencyAnimatorSystemStrategy_RendererState*>& items) {
            return il2cpp::array_new<app::TransparencyAnimatorSystemStrategy_RendererState__Array>(get_class(), items);
        }
    } // namespace TransparencyAnimatorSystemStrategy_RendererState
} // namespace app::classes::types
