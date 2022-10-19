#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RenderTargetDescriptor {
        inline app::RenderTargetDescriptor__Class** type_info = (app::RenderTargetDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04774618));
        inline app::RenderTargetDescriptor__Class* get_class() {
            return il2cpp::get_class<app::RenderTargetDescriptor__Class>(type_info, "Moon.Rendering", "RenderTargetDescriptor");
        }
        inline app::RenderTargetDescriptor* create() {
            return il2cpp::create_object<app::RenderTargetDescriptor>(get_class());
        }
        inline app::RenderTargetDescriptor__Boxed* box(app::RenderTargetDescriptor value) {
            return il2cpp::box_value<app::RenderTargetDescriptor__Boxed>(get_class(), value);
        }
    } // namespace RenderTargetDescriptor
} // namespace app::classes::types
