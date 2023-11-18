#pragma once
#include <Modloader/app/structs/BlackboardVariable__Array.h>
#include <Modloader/app/structs/BlackboardVariable__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlackboardVariable__Array {
        inline app::BlackboardVariable__Array__Class** type_info() {
            static app::BlackboardVariable__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlackboardVariable__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlackboardVariable__Array__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariable__Array__Class>(type_info(), "Moon.BehaviourSystem", "BlackboardVariable[]");
        }
        inline app::BlackboardVariable__Array* create() {
            return il2cpp::create_object<app::BlackboardVariable__Array>(get_class());
        }
    } // namespace BlackboardVariable__Array
} // namespace app::classes::types
