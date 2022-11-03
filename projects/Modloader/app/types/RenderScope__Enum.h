#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RenderScope__Enum {
        inline app::RenderScope__Enum__Class** type_info = (app::RenderScope__Enum__Class**)(modloader::win::memory::resolve_rva(0x047665C8));
        inline app::RenderScope__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderScope__Enum__Class>(type_info, "Moon.Rendering", "RenderScope");
        }
        inline app::RenderScope__Enum* create() {
            return il2cpp::create_object<app::RenderScope__Enum>(get_class());
        }
    } // namespace RenderScope__Enum
} // namespace app::classes::types
