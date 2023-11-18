#pragma once
#include <Modloader/app/structs/TestSet__Array.h>
#include <Modloader/app/structs/TestSet__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TestSet__Array {
        inline app::TestSet__Array__Class** type_info() {
            static app::TestSet__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TestSet__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TestSet__Array__Class* get_class() {
            return il2cpp::get_class<app::TestSet__Array__Class>(type_info(), "", "TestSet[]");
        }
        inline app::TestSet__Array* create() {
            return il2cpp::create_object<app::TestSet__Array>(get_class());
        }
    } // namespace TestSet__Array
} // namespace app::classes::types
