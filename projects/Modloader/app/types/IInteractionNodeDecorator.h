#pragma once
#include <Modloader/app/structs/IInteractionNodeDecorator.h>
#include <Modloader/app/structs/IInteractionNodeDecorator__Array.h>
#include <Modloader/app/structs/IInteractionNodeDecorator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IInteractionNodeDecorator {
        inline app::IInteractionNodeDecorator__Class** type_info() {
            static app::IInteractionNodeDecorator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IInteractionNodeDecorator__Class**)(modloader::win::memory::resolve_rva(0x047665F8));
            }
            return cache;
        }
        inline app::IInteractionNodeDecorator__Class* get_class() {
            return il2cpp::get_class<app::IInteractionNodeDecorator__Class>(type_info(), "Moon.InteractionGraph", "IInteractionNodeDecorator");
        }
        inline app::IInteractionNodeDecorator__Array* create_array(int size) {
            return il2cpp::array_new<app::IInteractionNodeDecorator__Array>(get_class(), size);
        }
        inline app::IInteractionNodeDecorator__Array* create_array(const std::vector<app::IInteractionNodeDecorator*>& items) {
            return il2cpp::array_new<app::IInteractionNodeDecorator__Array>(get_class(), items);
        }
    } // namespace IInteractionNodeDecorator
} // namespace app::classes::types
