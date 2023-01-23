#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ActionDisposable_1__Class.h>
#include <Modloader/app/structs/ActionDisposable_1.h>

namespace app::classes::types {
    namespace ActionDisposable_1 {
        inline app::ActionDisposable_1__Class** type_info = (app::ActionDisposable_1__Class**)(modloader::win::memory::resolve_rva(0x04741188));
        inline app::ActionDisposable_1__Class* get_class() {
            return il2cpp::get_class<app::ActionDisposable_1__Class>(type_info, "Moon.Timeline.Constraints", "ActionDisposable");
        }
        inline app::ActionDisposable_1* create() {
            return il2cpp::create_object<app::ActionDisposable_1>(get_class());
        }
    } // namespace ActionDisposable_1
} // namespace app::classes::types
