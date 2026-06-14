#pragma once
#include <Modloader/app/structs/RuntimeArgumentHandle.h>
#include <Modloader/app/structs/RuntimeArgumentHandle__Boxed.h>
#include <Modloader/app/structs/RuntimeArgumentHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeArgumentHandle {
        inline app::RuntimeArgumentHandle__Class** type_info() {
            static app::RuntimeArgumentHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeArgumentHandle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeArgumentHandle__Class* get_class() {
            return il2cpp::get_class<app::RuntimeArgumentHandle__Class>(type_info(), "System", "RuntimeArgumentHandle");
        }
        inline app::RuntimeArgumentHandle* create() {
            return il2cpp::create_object<app::RuntimeArgumentHandle>(get_class());
        }
        inline app::RuntimeArgumentHandle__Boxed* box(app::RuntimeArgumentHandle value) {
            return il2cpp::box_value<app::RuntimeArgumentHandle__Boxed>(get_class(), value);
        }
    } // namespace RuntimeArgumentHandle
} // namespace app::classes::types
