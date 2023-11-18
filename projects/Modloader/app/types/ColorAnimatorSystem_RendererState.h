#pragma once
#include <Modloader/app/structs/ColorAnimatorSystem_RendererState.h>
#include <Modloader/app/structs/ColorAnimatorSystem_RendererState__Array.h>
#include <Modloader/app/structs/ColorAnimatorSystem_RendererState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorAnimatorSystem_RendererState {
        inline app::ColorAnimatorSystem_RendererState__Class** type_info() {
            static app::ColorAnimatorSystem_RendererState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ColorAnimatorSystem_RendererState__Class**)(modloader::win::memory::resolve_rva(0x047424F8));
            }
            return cache;
        }
        inline app::ColorAnimatorSystem_RendererState__Class* get_class() {
            return il2cpp::get_nested_class<app::ColorAnimatorSystem_RendererState__Class>(type_info(), "Moon.Timeline", "ColorAnimatorSystem", "RendererState");
        }
        inline app::ColorAnimatorSystem_RendererState* create() {
            return il2cpp::create_object<app::ColorAnimatorSystem_RendererState>(get_class());
        }
        inline app::ColorAnimatorSystem_RendererState__Array* create_array(int size) {
            return il2cpp::array_new<app::ColorAnimatorSystem_RendererState__Array>(get_class(), size);
        }
        inline app::ColorAnimatorSystem_RendererState__Array* create_array(const std::vector<app::ColorAnimatorSystem_RendererState*>& items) {
            return il2cpp::array_new<app::ColorAnimatorSystem_RendererState__Array>(get_class(), items);
        }
    } // namespace ColorAnimatorSystem_RendererState
} // namespace app::classes::types
