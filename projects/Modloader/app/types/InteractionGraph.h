#pragma once
#include <Modloader/app/structs/InteractionGraph.h>
#include <Modloader/app/structs/InteractionGraph__Array.h>
#include <Modloader/app/structs/InteractionGraph__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionGraph {
        inline app::InteractionGraph__Class** type_info() {
            static app::InteractionGraph__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionGraph__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionGraph__Class* get_class() {
            return il2cpp::get_class<app::InteractionGraph__Class>(type_info(), "Moon.InteractionGraph", "InteractionGraph");
        }
        inline app::InteractionGraph* create() {
            return il2cpp::create_object<app::InteractionGraph>(get_class());
        }
        inline app::InteractionGraph__Array* create_array(int size) {
            return il2cpp::array_new<app::InteractionGraph__Array>(get_class(), size);
        }
        inline app::InteractionGraph__Array* create_array(const std::vector<app::InteractionGraph*>& items) {
            return il2cpp::array_new<app::InteractionGraph__Array>(get_class(), items);
        }
    } // namespace InteractionGraph
} // namespace app::classes::types
