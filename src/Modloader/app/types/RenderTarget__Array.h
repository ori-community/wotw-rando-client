#pragma once
#include <Modloader/app/structs/RenderTarget__Array.h>
#include <Modloader/app/structs/RenderTarget__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderTarget__Array {
        inline app::RenderTarget__Array__Class** type_info() {
            static app::RenderTarget__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RenderTarget__Array__Class**)(modloader::win::memory::resolve_rva(0x04746D48));
            }
            return cache;
        }
        inline app::RenderTarget__Array__Class* get_class() {
            return il2cpp::get_class<app::RenderTarget__Array__Class>(type_info(), "Moon.Rendering", "RenderTarget[]");
        }
        inline app::RenderTarget__Array* create() {
            return il2cpp::create_object<app::RenderTarget__Array>(get_class());
        }
    } // namespace RenderTarget__Array
} // namespace app::classes::types
