#pragma once
#include <Modloader/app/structs/RecorderMessageData__Array.h>
#include <Modloader/app/structs/RecorderMessageData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecorderMessageData__Array {
        inline app::RecorderMessageData__Array__Class** type_info() {
            static app::RecorderMessageData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecorderMessageData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecorderMessageData__Array__Class* get_class() {
            return il2cpp::get_class<app::RecorderMessageData__Array__Class>(type_info(), "", "RecorderMessageData[]");
        }
        inline app::RecorderMessageData__Array* create() {
            return il2cpp::create_object<app::RecorderMessageData__Array>(get_class());
        }
    } // namespace RecorderMessageData__Array
} // namespace app::classes::types
