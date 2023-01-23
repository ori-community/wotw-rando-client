#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Image__Class.h>
#include <Modloader/app/structs/Image.h>
#include <Modloader/app/structs/Image__Array.h>

namespace app::classes::types {
    namespace Image {
        inline app::Image__Class** type_info = (app::Image__Class**)(modloader::win::memory::resolve_rva(0x0474F9E8));
        inline app::Image__Class* get_class() {
            return il2cpp::get_class<app::Image__Class>(type_info, "UnityEngine.UI", "Image");
        }
        inline app::Image* create() {
            return il2cpp::create_object<app::Image>(get_class());
        }
        inline app::Image__Array* create_array(int size) {
            return il2cpp::array_new<app::Image__Array>(get_class(), size);
        }
        inline app::Image__Array* create_array(const std::vector<app::Image*>& items) {
            return il2cpp::array_new<app::Image__Array>(get_class(), items);
        }
    } // namespace Image
} // namespace app::classes::types
