#pragma once
#include <Modloader/app/structs/DelayedAction.h>
#include <Modloader/app/structs/DelayedAction__Array.h>
#include <Modloader/app/structs/DelayedAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DelayedAction {
        inline app::DelayedAction__Class** type_info() {
            static app::DelayedAction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DelayedAction__Class**)(modloader::win::memory::resolve_rva(0x04711538));
            }
            return cache;
        }
        inline app::DelayedAction__Class* get_class() {
            return il2cpp::get_class<app::DelayedAction__Class>(type_info(), "", "DelayedAction");
        }
        inline app::DelayedAction* create() {
            return il2cpp::create_object<app::DelayedAction>(get_class());
        }
        inline app::DelayedAction__Array* create_array(int size) {
            return il2cpp::array_new<app::DelayedAction__Array>(get_class(), size);
        }
        inline app::DelayedAction__Array* create_array(const std::vector<app::DelayedAction*>& items) {
            return il2cpp::array_new<app::DelayedAction__Array>(get_class(), items);
        }
    } // namespace DelayedAction
} // namespace app::classes::types
