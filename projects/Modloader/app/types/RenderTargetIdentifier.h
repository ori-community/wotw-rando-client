#pragma once
#include <Modloader/app/structs/RenderTargetIdentifier.h>
#include <Modloader/app/structs/RenderTargetIdentifier__Array.h>
#include <Modloader/app/structs/RenderTargetIdentifier__Boxed.h>
#include <Modloader/app/structs/RenderTargetIdentifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderTargetIdentifier {
        inline app::RenderTargetIdentifier__Class** type_info() {
            static app::RenderTargetIdentifier__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RenderTargetIdentifier__Class**)(modloader::win::memory::resolve_rva(0x04712BD8));
            }
            return cache;
        }
        inline app::RenderTargetIdentifier__Class* get_class() {
            return il2cpp::get_class<app::RenderTargetIdentifier__Class>(type_info(), "UnityEngine.Rendering", "RenderTargetIdentifier");
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
