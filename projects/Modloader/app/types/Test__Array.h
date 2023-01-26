#pragma once
#include <Modloader/app/structs/Test__Array.h>
#include <Modloader/app/structs/Test__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Test__Array {
        inline app::Test__Array__Class** type_info() {
            static app::Test__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Test__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Test__Array__Class* get_class() {
            return il2cpp::get_class<app::Test__Array__Class>(type_info(), "", "Test[]");
        }
        inline app::Test__Array* create() {
            return il2cpp::create_object<app::Test__Array>(get_class());
        }
    } // namespace Test__Array
} // namespace app::classes::types
