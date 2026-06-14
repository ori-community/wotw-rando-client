#pragma once
#include <Modloader/app/structs/StretchGameObject.h>
#include <Modloader/app/structs/StretchGameObject__Array.h>
#include <Modloader/app/structs/StretchGameObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StretchGameObject {
        inline app::StretchGameObject__Class** type_info() {
            static app::StretchGameObject__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StretchGameObject__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StretchGameObject__Class* get_class() {
            return il2cpp::get_class<app::StretchGameObject__Class>(type_info(), "", "StretchGameObject");
        }
        inline app::StretchGameObject* create() {
            return il2cpp::create_object<app::StretchGameObject>(get_class());
        }
        inline app::StretchGameObject__Array* create_array(int size) {
            return il2cpp::array_new<app::StretchGameObject__Array>(get_class(), size);
        }
        inline app::StretchGameObject__Array* create_array(const std::vector<app::StretchGameObject*>& items) {
            return il2cpp::array_new<app::StretchGameObject__Array>(get_class(), items);
        }
    } // namespace StretchGameObject
} // namespace app::classes::types
