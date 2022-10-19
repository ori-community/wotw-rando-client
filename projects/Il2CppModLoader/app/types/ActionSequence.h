#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActionSequence {
        inline app::ActionSequence__Class** type_info = (app::ActionSequence__Class**)(modloader::win::memory::resolve_rva(0x0471D558));
        inline app::ActionSequence__Class* get_class() {
            return il2cpp::get_class<app::ActionSequence__Class>(type_info, "", "ActionSequence");
        }
        inline app::ActionSequence* create() {
            return il2cpp::create_object<app::ActionSequence>(get_class());
        }
        inline app::ActionSequence__Array* create_array(int size) {
            return il2cpp::array_new<app::ActionSequence__Array>(get_class(), size);
        }
        inline app::ActionSequence__Array* create_array(const std::vector<app::ActionSequence*>& items) {
            return il2cpp::array_new<app::ActionSequence__Array>(get_class(), items);
        }
    } // namespace ActionSequence
} // namespace app::classes::types
