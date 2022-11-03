#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActionDisposable {
        inline app::ActionDisposable__Class** type_info = (app::ActionDisposable__Class**)(modloader::win::memory::resolve_rva(0x0476FE28));
        inline app::ActionDisposable__Class* get_class() {
            return il2cpp::get_class<app::ActionDisposable__Class>(type_info, "", "ActionDisposable");
        }
        inline app::ActionDisposable* create() {
            return il2cpp::create_object<app::ActionDisposable>(get_class());
        }
    } // namespace ActionDisposable
} // namespace app::classes::types
