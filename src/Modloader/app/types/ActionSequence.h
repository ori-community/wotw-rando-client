#pragma once
#include <Modloader/app/structs/ActionSequence.h>
#include <Modloader/app/structs/ActionSequence__Array.h>
#include <Modloader/app/structs/ActionSequence__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActionSequence {
        inline app::ActionSequence__Class** type_info() {
            static app::ActionSequence__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ActionSequence__Class**)(modloader::win::memory::resolve_rva(0x0471D558));
            }
            return cache;
        }
        inline app::ActionSequence__Class* get_class() {
            return il2cpp::get_class<app::ActionSequence__Class>(type_info(), "", "ActionSequence");
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
