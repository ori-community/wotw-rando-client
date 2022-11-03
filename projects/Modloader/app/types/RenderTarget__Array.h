#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RenderTarget__Array {
        inline app::RenderTarget__Array__Class** type_info = (app::RenderTarget__Array__Class**)(modloader::win::memory::resolve_rva(0x04746D48));
        inline app::RenderTarget__Array__Class* get_class() {
            return il2cpp::get_class<app::RenderTarget__Array__Class>(type_info, "Moon.Rendering", "RenderTarget[]");
        }
        inline app::RenderTarget__Array* create() {
            return il2cpp::create_object<app::RenderTarget__Array>(get_class());
        }
    } // namespace RenderTarget__Array
} // namespace app::classes::types
