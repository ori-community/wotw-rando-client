#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Checkpoint_Events {
        inline app::Checkpoint_Events__Class** type_info = (app::Checkpoint_Events__Class**)(modloader::win::memory::resolve_rva(0x04794928));
        inline app::Checkpoint_Events__Class* get_class() {
            return il2cpp::get_nested_class<app::Checkpoint_Events__Class>(type_info, "Game", "Checkpoint", "Events");
        }
        inline app::Checkpoint_Events* create() {
            return il2cpp::create_object<app::Checkpoint_Events>(get_class());
        }
    } // namespace Checkpoint_Events
} // namespace app::classes::types
