#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DelayedActionManager__Class.h>
#include <Modloader/app/structs/DelayedActionManager.h>

namespace app::classes::types {
    namespace DelayedActionManager {
        inline app::DelayedActionManager__Class** type_info = (app::DelayedActionManager__Class**)(modloader::win::memory::resolve_rva(0x0472E660));
        inline app::DelayedActionManager__Class* get_class() {
            return il2cpp::get_class<app::DelayedActionManager__Class>(type_info, "", "DelayedActionManager");
        }
        inline app::DelayedActionManager* create() {
            return il2cpp::create_object<app::DelayedActionManager>(get_class());
        }
    } // namespace DelayedActionManager
} // namespace app::classes::types
