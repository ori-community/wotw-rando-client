#pragma once
#include <Modloader/app/structs/TransparencyAnimatorSystemStrategy_RendererState.h>
#include <Modloader/app/structs/TransparencyAnimatorSystemStrategy_RendererState__Array.h>
#include <Modloader/app/structs/TransparencyAnimatorSystemStrategy_RendererState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransparencyAnimatorSystemStrategy_RendererState {
        inline app::TransparencyAnimatorSystemStrategy_RendererState__Class** type_info() {
            static app::TransparencyAnimatorSystemStrategy_RendererState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TransparencyAnimatorSystemStrategy_RendererState__Class**)(modloader::win::memory::resolve_rva(0x04772B38));
            }
            return cache;
        }
        inline app::TransparencyAnimatorSystemStrategy_RendererState__Class* get_class() {
            return il2cpp::get_nested_class<app::TransparencyAnimatorSystemStrategy_RendererState__Class>(type_info(), "Moon.Timeline", "TransparencyAnimatorSystemStrategy", "RendererState");
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
