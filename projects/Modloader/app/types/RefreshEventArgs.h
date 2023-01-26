#pragma once
#include <Modloader/app/structs/RefreshEventArgs.h>
#include <Modloader/app/structs/RefreshEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RefreshEventArgs {
        inline app::RefreshEventArgs__Class** type_info() {
            static app::RefreshEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RefreshEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0470BFE0));
            }
            return cache;
        }
        inline app::RefreshEventArgs__Class* get_class() {
            return il2cpp::get_class<app::RefreshEventArgs__Class>(type_info(), "System.ComponentModel", "RefreshEventArgs");
        }
        inline app::RefreshEventArgs* create() {
            return il2cpp::create_object<app::RefreshEventArgs>(get_class());
        }
    } // namespace RefreshEventArgs
} // namespace app::classes::types
