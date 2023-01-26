#pragma once
#include <Modloader/app/structs/IDtdEntityInfo__Array.h>
#include <Modloader/app/structs/IDtdEntityInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDtdEntityInfo__Array {
        inline app::IDtdEntityInfo__Array__Class** type_info() {
            static app::IDtdEntityInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IDtdEntityInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IDtdEntityInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::IDtdEntityInfo__Array__Class>(type_info(), "System.Xml", "IDtdEntityInfo[]");
        }
        inline app::IDtdEntityInfo__Array* create() {
            return il2cpp::create_object<app::IDtdEntityInfo__Array>(get_class());
        }
    } // namespace IDtdEntityInfo__Array
} // namespace app::classes::types
