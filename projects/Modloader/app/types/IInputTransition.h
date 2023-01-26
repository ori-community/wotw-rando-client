#pragma once
#include <Modloader/app/structs/IInputTransition.h>
#include <Modloader/app/structs/IInputTransition__Array.h>
#include <Modloader/app/structs/IInputTransition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IInputTransition {
        inline app::IInputTransition__Class** type_info() {
            static app::IInputTransition__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IInputTransition__Class**)(modloader::win::memory::resolve_rva(0x04791A98));
            }
            return cache;
        }
        inline app::IInputTransition__Class* get_class() {
            return il2cpp::get_class<app::IInputTransition__Class>(type_info(), "Moon.InteractionGraph", "IInputTransition");
        }
        inline app::IInputTransition__Array* create_array(int size) {
            return il2cpp::array_new<app::IInputTransition__Array>(get_class(), size);
        }
        inline app::IInputTransition__Array* create_array(const std::vector<app::IInputTransition*>& items) {
            return il2cpp::array_new<app::IInputTransition__Array>(get_class(), items);
        }
    } // namespace IInputTransition
} // namespace app::classes::types
