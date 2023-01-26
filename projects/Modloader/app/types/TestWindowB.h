#pragma once
#include <Modloader/app/structs/TestWindowB.h>
#include <Modloader/app/structs/TestWindowB__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TestWindowB {
        inline app::TestWindowB__Class** type_info() {
            static app::TestWindowB__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TestWindowB__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TestWindowB__Class* get_class() {
            return il2cpp::get_class<app::TestWindowB__Class>(type_info(), "", "TestWindowB");
        }
        inline app::TestWindowB* create() {
            return il2cpp::create_object<app::TestWindowB>(get_class());
        }
    } // namespace TestWindowB
} // namespace app::classes::types
