#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Material__Array__Class.h>
#include <Modloader/app/structs/Material__Array.h>
#include <Modloader/app/structs/Material__Array__Array.h>

namespace app::classes::types {
    namespace Material__Array {
        inline app::Material__Array__Class** type_info = (app::Material__Array__Class**)(modloader::win::memory::resolve_rva(0x04713CC0));
        inline app::Material__Array__Class* get_class() {
            return il2cpp::get_class<app::Material__Array__Class>(type_info, "UnityEngine", "Material[]");
        }
        inline app::Material__Array* create() {
            return il2cpp::create_object<app::Material__Array>(get_class());
        }
        inline app::Material__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::Material__Array__Array>(get_class(), size);
        }
        inline app::Material__Array__Array* create_array(const std::vector<app::Material__Array*>& items) {
            return il2cpp::array_new<app::Material__Array__Array>(get_class(), items);
        }
    } // namespace Material__Array
} // namespace app::classes::types
