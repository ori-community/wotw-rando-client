#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConstraintStruct {
        inline app::ConstraintStruct__Class** type_info = (app::ConstraintStruct__Class**)(modloader::win::memory::resolve_rva(0x0476E0B0));
        inline app::ConstraintStruct__Class* get_class() {
            return il2cpp::get_class<app::ConstraintStruct__Class>(type_info, "System.Xml.Schema", "ConstraintStruct");
        }
        inline app::ConstraintStruct* create() {
            return il2cpp::create_object<app::ConstraintStruct>(get_class());
        }
        inline app::ConstraintStruct__Array* create_array(int size) {
            return il2cpp::array_new<app::ConstraintStruct__Array>(get_class(), size);
        }
        inline app::ConstraintStruct__Array* create_array(const std::vector<app::ConstraintStruct*>& items) {
            return il2cpp::array_new<app::ConstraintStruct__Array>(get_class(), items);
        }
    } // namespace ConstraintStruct
} // namespace app::classes::types
