#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GridObject {
        namespace {
            app::GridObject__Class* type_info_ref = nullptr;
        }
        app::GridObject__Class** type_info = &type_info_ref;
        inline app::GridObject__Class* get_class() {
            return il2cpp::get_class<app::GridObject__Class>(type_info, "", "GridObject");
        }
        inline app::GridObject* create() {
            return il2cpp::create_object<app::GridObject>(get_class());
        }
        inline app::GridObject__Array* create_array(int size) {
            return il2cpp::array_new<app::GridObject__Array>(get_class(), size);
        }
        inline app::GridObject__Array* create_array(const std::vector<app::GridObject*>& items) {
            return il2cpp::array_new<app::GridObject__Array>(get_class(), items);
        }
    } // namespace GridObject
} // namespace app::classes::types
