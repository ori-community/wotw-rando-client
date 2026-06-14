#pragma once
#include <Modloader/app/structs/DefaultBinder_BinderState.h>
#include <Modloader/app/structs/DefaultBinder_BinderState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultBinder_BinderState {
        inline app::DefaultBinder_BinderState__Class** type_info() {
            static app::DefaultBinder_BinderState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DefaultBinder_BinderState__Class**)(modloader::win::memory::resolve_rva(0x0474B778));
            }
            return cache;
        }
        inline app::DefaultBinder_BinderState__Class* get_class() {
            return il2cpp::get_nested_class<app::DefaultBinder_BinderState__Class>(type_info(), "System", "DefaultBinder", "BinderState");
        }
        inline app::DefaultBinder_BinderState* create() {
            return il2cpp::create_object<app::DefaultBinder_BinderState>(get_class());
        }
    } // namespace DefaultBinder_BinderState
} // namespace app::classes::types
