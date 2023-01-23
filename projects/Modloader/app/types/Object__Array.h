#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Object__Array__Class.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Object__Array__Array.h>

namespace app::classes::types {
    namespace Object__Array {
        inline app::Object__Array__Class** type_info = (app::Object__Array__Class**)(modloader::win::memory::resolve_rva(0x0475A068));
        inline app::Object__Array__Class* get_class() {
            return il2cpp::get_class<app::Object__Array__Class>(type_info, "System", "Object[]");
        }
        inline app::Object__Array* create() {
            return il2cpp::create_object<app::Object__Array>(get_class());
        }
        inline app::Object__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::Object__Array__Array>(get_class(), size);
        }
        inline app::Object__Array__Array* create_array(const std::vector<app::Object__Array*>& items) {
            return il2cpp::array_new<app::Object__Array__Array>(get_class(), items);
        }
    } // namespace Object__Array
} // namespace app::classes::types
