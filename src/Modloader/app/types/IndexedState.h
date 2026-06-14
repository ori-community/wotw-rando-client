#pragma once
#include <Modloader/app/structs/IndexedState.h>
#include <Modloader/app/structs/IndexedState__Boxed.h>
#include <Modloader/app/structs/IndexedState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IndexedState {
        inline app::IndexedState__Class** type_info() {
            static app::IndexedState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IndexedState__Class**)(modloader::win::memory::resolve_rva(0x0471FA60));
            }
            return cache;
        }
        inline app::IndexedState__Class* get_class() {
            return il2cpp::get_class<app::IndexedState__Class>(type_info(), "", "IndexedState");
        }
        inline app::IndexedState* create() {
            return il2cpp::create_object<app::IndexedState>(get_class());
        }
        inline app::IndexedState__Boxed* box(app::IndexedState value) {
            return il2cpp::box_value<app::IndexedState__Boxed>(get_class(), value);
        }
    } // namespace IndexedState
} // namespace app::classes::types
