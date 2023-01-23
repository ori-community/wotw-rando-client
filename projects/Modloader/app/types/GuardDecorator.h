#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GuardDecorator__Class.h>
#include <Modloader/app/structs/GuardDecorator.h>
#include <Modloader/app/structs/GuardDecorator__Array.h>

namespace app::classes::types {
    namespace GuardDecorator {
        inline app::GuardDecorator__Class** type_info = (app::GuardDecorator__Class**)(modloader::win::memory::resolve_rva(0x0473C610));
        inline app::GuardDecorator__Class* get_class() {
            return il2cpp::get_class<app::GuardDecorator__Class>(type_info, "Moon.BehaviourSystem", "GuardDecorator");
        }
        inline app::GuardDecorator* create() {
            return il2cpp::create_object<app::GuardDecorator>(get_class());
        }
        inline app::GuardDecorator__Array* create_array(int size) {
            return il2cpp::array_new<app::GuardDecorator__Array>(get_class(), size);
        }
        inline app::GuardDecorator__Array* create_array(const std::vector<app::GuardDecorator*>& items) {
            return il2cpp::array_new<app::GuardDecorator__Array>(get_class(), items);
        }
    } // namespace GuardDecorator
} // namespace app::classes::types
