#pragma once
#include <Modloader/app/structs/RenderTarget.h>
#include <Modloader/app/structs/RenderTarget__Array.h>
#include <Modloader/app/structs/RenderTarget__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderTarget {
        inline app::RenderTarget__Class** type_info() {
            static app::RenderTarget__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RenderTarget__Class**)(modloader::win::memory::resolve_rva(0x047694F0));
            }
            return cache;
        }
        inline app::RenderTarget__Class* get_class() {
            return il2cpp::get_class<app::RenderTarget__Class>(type_info(), "Moon.Rendering", "RenderTarget");
        }
        inline app::RenderTarget* create() {
            return il2cpp::create_object<app::RenderTarget>(get_class());
        }
        inline app::RenderTarget__Array* create_array(int size) {
            return il2cpp::array_new<app::RenderTarget__Array>(get_class(), size);
        }
        inline app::RenderTarget__Array* create_array(const std::vector<app::RenderTarget*>& items) {
            return il2cpp::array_new<app::RenderTarget__Array>(get_class(), items);
        }
    } // namespace RenderTarget
} // namespace app::classes::types
