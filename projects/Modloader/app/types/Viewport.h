#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Viewport {
        inline app::Viewport__Class** type_info = (app::Viewport__Class**)(modloader::win::memory::resolve_rva(0x04721E68));
        inline app::Viewport__Class* get_class() {
            return il2cpp::get_class<app::Viewport__Class>(type_info, "Moon.Rendering", "Viewport");
        }
        inline app::Viewport* create() {
            return il2cpp::create_object<app::Viewport>(get_class());
        }
        inline app::Viewport__Boxed* box(app::Viewport value) {
            return il2cpp::box_value<app::Viewport__Boxed>(get_class(), value);
        }
    } // namespace Viewport
} // namespace app::classes::types
