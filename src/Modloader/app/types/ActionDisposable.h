#pragma once
#include <Modloader/app/structs/ActionDisposable.h>
#include <Modloader/app/structs/ActionDisposable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActionDisposable {
        inline app::ActionDisposable__Class** type_info() {
            static app::ActionDisposable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ActionDisposable__Class**)(modloader::win::memory::resolve_rva(0x0476FE28));
            }
            return cache;
        }
        inline app::ActionDisposable__Class* get_class() {
            return il2cpp::get_class<app::ActionDisposable__Class>(type_info(), "", "ActionDisposable");
        }
        inline app::ActionDisposable* create() {
            return il2cpp::create_object<app::ActionDisposable>(get_class());
        }
    } // namespace ActionDisposable
} // namespace app::classes::types
