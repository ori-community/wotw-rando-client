#pragma once
#include <Modloader/app/structs/InteractionGraph_InteractionGraphContext.h>
#include <Modloader/app/structs/InteractionGraph_InteractionGraphContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionGraph_InteractionGraphContext {
        inline app::InteractionGraph_InteractionGraphContext__Class** type_info() {
            static app::InteractionGraph_InteractionGraphContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InteractionGraph_InteractionGraphContext__Class**)(modloader::win::memory::resolve_rva(0x04772250));
            }
            return cache;
        }
        inline app::InteractionGraph_InteractionGraphContext__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionGraph_InteractionGraphContext__Class>(type_info(), "Moon.InteractionGraph", "InteractionGraph", "InteractionGraphContext");
        }
        inline app::InteractionGraph_InteractionGraphContext* create() {
            return il2cpp::create_object<app::InteractionGraph_InteractionGraphContext>(get_class());
        }
    } // namespace InteractionGraph_InteractionGraphContext
} // namespace app::classes::types
