#pragma once
#include <Modloader/app/structs/ObjectReference.h>
#include <Modloader/app/structs/ObjectReference__Array.h>
#include <Modloader/app/structs/ObjectReference__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectReference {
        inline app::ObjectReference__Class** type_info() {
            static app::ObjectReference__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectReference__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectReference__Class* get_class() {
            return il2cpp::get_class<app::ObjectReference__Class>(type_info(), "", "ObjectReference");
        }
        inline app::ObjectReference* create() {
            return il2cpp::create_object<app::ObjectReference>(get_class());
        }
        inline app::ObjectReference__Array* create_array(int size) {
            return il2cpp::array_new<app::ObjectReference__Array>(get_class(), size);
        }
        inline app::ObjectReference__Array* create_array(const std::vector<app::ObjectReference*>& items) {
            return il2cpp::array_new<app::ObjectReference__Array>(get_class(), items);
        }
    } // namespace ObjectReference
} // namespace app::classes::types
