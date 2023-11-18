#pragma once
#include <Modloader/app/structs/FrogEntity__Array.h>
#include <Modloader/app/structs/FrogEntity__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrogEntity__Array {
        inline app::FrogEntity__Array__Class** type_info() {
            static app::FrogEntity__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FrogEntity__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FrogEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::FrogEntity__Array__Class>(type_info(), "", "FrogEntity[]");
        }
        inline app::FrogEntity__Array* create() {
            return il2cpp::create_object<app::FrogEntity__Array>(get_class());
        }
    } // namespace FrogEntity__Array
} // namespace app::classes::types
