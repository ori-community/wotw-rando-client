#pragma once
#include <Modloader/app/structs/ICameraTarget__Array.h>
#include <Modloader/app/structs/ICameraTarget__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICameraTarget__Array {
        inline app::ICameraTarget__Array__Class** type_info() {
            static app::ICameraTarget__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ICameraTarget__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ICameraTarget__Array__Class* get_class() {
            return il2cpp::get_class<app::ICameraTarget__Array__Class>(type_info(), "", "ICameraTarget[]");
        }
        inline app::ICameraTarget__Array* create() {
            return il2cpp::create_object<app::ICameraTarget__Array>(get_class());
        }
    } // namespace ICameraTarget__Array
} // namespace app::classes::types
