#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RenderTargetIdentifier__Array {
        inline app::RenderTargetIdentifier__Array__Class** type_info = (app::RenderTargetIdentifier__Array__Class**)(modloader::win::memory::resolve_rva(0x04756998));
        inline app::RenderTargetIdentifier__Array__Class* get_class() {
            return il2cpp::get_class<app::RenderTargetIdentifier__Array__Class>(type_info, "UnityEngine.Rendering", "RenderTargetIdentifier[]");
        }
        inline app::RenderTargetIdentifier__Array* create() {
            return il2cpp::create_object<app::RenderTargetIdentifier__Array>(get_class());
        }
        inline app::RenderTargetIdentifier__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::RenderTargetIdentifier__Array__Array>(get_class(), size);
        }
        inline app::RenderTargetIdentifier__Array__Array* create_array(const std::vector<app::RenderTargetIdentifier__Array*>& items) {
            return il2cpp::array_new<app::RenderTargetIdentifier__Array__Array>(get_class(), items);
        }
    } // namespace RenderTargetIdentifier__Array
} // namespace app::classes::types
