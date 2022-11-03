#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Behavior {
        inline app::Behavior__Class** type_info = (app::Behavior__Class**)(modloader::win::memory::resolve_rva(0x04717910));
        inline app::Behavior__Class* get_class() {
            return il2cpp::get_class<app::Behavior__Class>(type_info, "TriangleNet", "Behavior");
        }
        inline app::Behavior* create() {
            return il2cpp::create_object<app::Behavior>(get_class());
        }
    } // namespace Behavior
} // namespace app::classes::types
