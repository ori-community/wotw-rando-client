#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Transition {
        inline app::Transition__Class** type_info = (app::Transition__Class**)(modloader::win::memory::resolve_rva(0x0477CC58));
        inline app::Transition__Class* get_class() {
            return il2cpp::get_class<app::Transition__Class>(type_info, "Moon.InteractionGraph", "Transition");
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
