#pragma once
#include <Modloader/app/structs/InteractionGraph_NodeFinishedCondition.h>
#include <Modloader/app/structs/InteractionGraph_NodeFinishedCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionGraph_NodeFinishedCondition {
        inline app::InteractionGraph_NodeFinishedCondition__Class** type_info() {
            static app::InteractionGraph_NodeFinishedCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InteractionGraph_NodeFinishedCondition__Class**)(modloader::win::memory::resolve_rva(0x04757D30));
            }
            return cache;
        }
        inline app::InteractionGraph_NodeFinishedCondition__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionGraph_NodeFinishedCondition__Class>(type_info(), "Moon.InteractionGraph", "InteractionGraph", "NodeFinishedCondition");
        }
        inline app::InteractionGraph_NodeFinishedCondition* create() {
            return il2cpp::create_object<app::InteractionGraph_NodeFinishedCondition>(get_class());
        }
    } // namespace InteractionGraph_NodeFinishedCondition
} // namespace app::classes::types
