#pragma once
#include <Modloader/app/structs/RenderTargetIdentifier__Array__Array.h>
#include <Modloader/app/structs/RenderTargetIdentifier__Array__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderTargetIdentifier__Array__Array {
        inline app::RenderTargetIdentifier__Array__Array__Class** type_info() {
            static app::RenderTargetIdentifier__Array__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RenderTargetIdentifier__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x0473A4D8));
            }
            return cache;
        }
        inline app::RenderTargetIdentifier__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::RenderTargetIdentifier__Array__Array__Class>(type_info(), "UnityEngine.Rendering", "RenderTargetIdentifier[][]");
        }
        inline app::RenderTargetIdentifier__Array__Array* create() {
            return il2cpp::create_object<app::RenderTargetIdentifier__Array__Array>(get_class());
        }
    } // namespace RenderTargetIdentifier__Array__Array
} // namespace app::classes::types
