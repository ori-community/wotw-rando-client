#pragma once
#include <Modloader/app/structs/UberPoolPerfTestSettings__Array.h>
#include <Modloader/app/structs/UberPoolPerfTestSettings__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTestSettings__Array {
        inline app::UberPoolPerfTestSettings__Array__Class** type_info() {
            static app::UberPoolPerfTestSettings__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolPerfTestSettings__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolPerfTestSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPoolPerfTestSettings__Array__Class>(type_info(), "", "UberPoolPerfTestSettings[]");
        }
        inline app::UberPoolPerfTestSettings__Array* create() {
            return il2cpp::create_object<app::UberPoolPerfTestSettings__Array>(get_class());
        }
    } // namespace UberPoolPerfTestSettings__Array
} // namespace app::classes::types
