#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RenderTargetIdentifier {
        inline app::RenderTargetIdentifier__Class** type_info = (app::RenderTargetIdentifier__Class**)(modloader::win::memory::resolve_rva(0x04712BD8));
        inline app::RenderTargetIdentifier__Class* get_class() {
            return il2cpp::get_class<app::RenderTargetIdentifier__Class>(type_info, "UnityEngine.Rendering", "RenderTargetIdentifier");
        }
        inline app::RenderTargetIdentifier* create() {
            return il2cpp::create_object<app::RenderTargetIdentifier>(get_class());
        }
        inline app::RenderTargetIdentifier__Boxed* box(app::RenderTargetIdentifier value) {
            return il2cpp::box_value<app::RenderTargetIdentifier__Boxed>(get_class(), value);
        }
        inline app::RenderTargetIdentifier__Array* create_array(int size) {
            return il2cpp::array_new<app::RenderTargetIdentifier__Array>(get_class(), size);
        }
        inline app::RenderTargetIdentifier__Array* create_array(const std::vector<app::RenderTargetIdentifier>& items) {
            return il2cpp::array_new<app::RenderTargetIdentifier__Array>(get_class(), items);
        }
    } // namespace RenderTargetIdentifier
} // namespace app::classes::types
