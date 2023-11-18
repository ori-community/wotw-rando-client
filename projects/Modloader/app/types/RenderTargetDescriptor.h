#pragma once
#include <Modloader/app/structs/RenderTargetDescriptor.h>
#include <Modloader/app/structs/RenderTargetDescriptor__Boxed.h>
#include <Modloader/app/structs/RenderTargetDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderTargetDescriptor {
        inline app::RenderTargetDescriptor__Class** type_info() {
            static app::RenderTargetDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RenderTargetDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04774618));
            }
            return cache;
        }
        inline app::RenderTargetDescriptor__Class* get_class() {
            return il2cpp::get_class<app::RenderTargetDescriptor__Class>(type_info(), "Moon.Rendering", "RenderTargetDescriptor");
        }
        inline app::RenderTargetDescriptor* create() {
            return il2cpp::create_object<app::RenderTargetDescriptor>(get_class());
        }
        inline app::RenderTargetDescriptor__Boxed* box(app::RenderTargetDescriptor value) {
            return il2cpp::box_value<app::RenderTargetDescriptor__Boxed>(get_class(), value);
        }
    } // namespace RenderTargetDescriptor
} // namespace app::classes::types
