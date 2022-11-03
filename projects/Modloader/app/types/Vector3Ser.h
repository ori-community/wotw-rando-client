#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Vector3Ser {
        inline app::Vector3Ser__Class** type_info = (app::Vector3Ser__Class**)(modloader::win::memory::resolve_rva(0x04704B40));
        inline app::Vector3Ser__Class* get_class() {
            return il2cpp::get_class<app::Vector3Ser__Class>(type_info, "", "Vector3Ser");
        }
        inline app::Vector3Ser* create() {
            return il2cpp::create_object<app::Vector3Ser>(get_class());
        }
        inline app::Vector3Ser__Array* create_array(int size) {
            return il2cpp::array_new<app::Vector3Ser__Array>(get_class(), size);
        }
        inline app::Vector3Ser__Array* create_array(const std::vector<app::Vector3Ser*>& items) {
            return il2cpp::array_new<app::Vector3Ser__Array>(get_class(), items);
        }
    } // namespace Vector3Ser
} // namespace app::classes::types
