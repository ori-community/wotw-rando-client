#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Renderer {
        inline app::Renderer__Class** type_info = (app::Renderer__Class**)(modloader::win::memory::resolve_rva(0x04766418));
        inline app::Renderer__Class* get_class() {
            return il2cpp::get_class<app::Renderer__Class>(type_info, "UnityEngine", "Renderer");
        }
        inline app::Renderer* create() {
            return il2cpp::create_object<app::Renderer>(get_class());
        }
        inline app::Renderer__Array* create_array(int size) {
            return il2cpp::array_new<app::Renderer__Array>(get_class(), size);
        }
        inline app::Renderer__Array* create_array(const std::vector<app::Renderer*>& items) {
            return il2cpp::array_new<app::Renderer__Array>(get_class(), items);
        }
    } // namespace Renderer
} // namespace app::classes::types
