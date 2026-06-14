#pragma once
#include <Modloader/app/structs/ObjectReference__Array.h>
#include <Modloader/app/structs/ObjectReference__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectReference__Array {
        inline app::ObjectReference__Array__Class** type_info() {
            static app::ObjectReference__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectReference__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectReference__Array__Class* get_class() {
            return il2cpp::get_class<app::ObjectReference__Array__Class>(type_info(), "", "ObjectReference[]");
        }
        inline app::ObjectReference__Array* create() {
            return il2cpp::create_object<app::ObjectReference__Array>(get_class());
        }
    } // namespace ObjectReference__Array
} // namespace app::classes::types
