#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Vector2Ser__Class.h>
#include <Modloader/app/structs/Vector2Ser.h>
#include <Modloader/app/structs/Vector2Ser__Array.h>

namespace app::classes::types {
    namespace Vector2Ser {
        inline app::Vector2Ser__Class** type_info = (app::Vector2Ser__Class**)(modloader::win::memory::resolve_rva(0x0478A3D8));
        inline app::Vector2Ser__Class* get_class() {
            return il2cpp::get_class<app::Vector2Ser__Class>(type_info, "", "Vector2Ser");
        }
        inline app::Vector2Ser* create() {
            return il2cpp::create_object<app::Vector2Ser>(get_class());
        }
        inline app::Vector2Ser__Array* create_array(int size) {
            return il2cpp::array_new<app::Vector2Ser__Array>(get_class(), size);
        }
        inline app::Vector2Ser__Array* create_array(const std::vector<app::Vector2Ser*>& items) {
            return il2cpp::array_new<app::Vector2Ser__Array>(get_class(), items);
        }
    } // namespace Vector2Ser
} // namespace app::classes::types
