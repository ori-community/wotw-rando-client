#pragma once
#include <Modloader/app/structs/GridObject.h>
#include <Modloader/app/structs/GridObject__Array.h>
#include <Modloader/app/structs/GridObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GridObject {
        inline app::GridObject__Class** type_info() {
            static app::GridObject__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GridObject__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GridObject__Class* get_class() {
            return il2cpp::get_class<app::GridObject__Class>(type_info(), "", "GridObject");
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
