#pragma once
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action__Array.h>
#include <Modloader/app/structs/Action__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Action {
        inline app::Action__Class** type_info() {
            static app::Action__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Action__Class**)(modloader::win::memory::resolve_rva(0x0471A150));
            }
            return cache;
        }
        inline app::Action__Class* get_class() {
            return il2cpp::get_class<app::Action__Class>(type_info(), "System", "Action");
        }
        inline app::Action* create() {
            return il2cpp::create_object<app::Action>(get_class());
        }
        inline app::Action__Array* create_array(int size) {
            return il2cpp::array_new<app::Action__Array>(get_class(), size);
        }
        inline app::Action__Array* create_array(const std::vector<app::Action*>& items) {
            return il2cpp::array_new<app::Action__Array>(get_class(), items);
        }
    } // namespace Action
} // namespace app::classes::types
