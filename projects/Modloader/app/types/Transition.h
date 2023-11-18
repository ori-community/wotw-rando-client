#pragma once
#include <Modloader/app/structs/Transition.h>
#include <Modloader/app/structs/Transition__Array.h>
#include <Modloader/app/structs/Transition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Transition {
        inline app::Transition__Class** type_info() {
            static app::Transition__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Transition__Class**)(modloader::win::memory::resolve_rva(0x0477CC58));
            }
            return cache;
        }
        inline app::Transition__Class* get_class() {
            return il2cpp::get_class<app::Transition__Class>(type_info(), "Moon.InteractionGraph", "Transition");
        }
        inline app::Transition* create() {
            return il2cpp::create_object<app::Transition>(get_class());
        }
        inline app::Transition__Array* create_array(int size) {
            return il2cpp::array_new<app::Transition__Array>(get_class(), size);
        }
        inline app::Transition__Array* create_array(const std::vector<app::Transition*>& items) {
            return il2cpp::array_new<app::Transition__Array>(get_class(), items);
        }
    } // namespace Transition
} // namespace app::classes::types
