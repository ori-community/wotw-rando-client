#pragma once
#include <Modloader/app/structs/MaterialBasedResourceMapEntry__Array.h>
#include <Modloader/app/structs/MaterialBasedResourceMapEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedResourceMapEntry__Array {
        inline app::MaterialBasedResourceMapEntry__Array__Class** type_info() {
            static app::MaterialBasedResourceMapEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaterialBasedResourceMapEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaterialBasedResourceMapEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedResourceMapEntry__Array__Class>(type_info(), "", "MaterialBasedResourceMapEntry[]");
        }
        inline app::MaterialBasedResourceMapEntry__Array* create() {
            return il2cpp::create_object<app::MaterialBasedResourceMapEntry__Array>(get_class());
        }
    } // namespace MaterialBasedResourceMapEntry__Array
} // namespace app::classes::types
