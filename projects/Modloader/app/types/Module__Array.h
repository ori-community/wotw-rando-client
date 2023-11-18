#pragma once
#include <Modloader/app/structs/Module__Array.h>
#include <Modloader/app/structs/Module__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Module__Array {
        inline app::Module__Array__Class** type_info() {
            static app::Module__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Module__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Module__Array__Class* get_class() {
            return il2cpp::get_class<app::Module__Array__Class>(type_info(), "System.Reflection", "Module[]");
        }
        inline app::Module__Array* create() {
            return il2cpp::create_object<app::Module__Array>(get_class());
        }
    } // namespace Module__Array
} // namespace app::classes::types
