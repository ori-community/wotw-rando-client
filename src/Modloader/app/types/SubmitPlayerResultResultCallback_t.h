#pragma once
#include <Modloader/app/structs/SubmitPlayerResultResultCallback_t.h>
#include <Modloader/app/structs/SubmitPlayerResultResultCallback_t__Boxed.h>
#include <Modloader/app/structs/SubmitPlayerResultResultCallback_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SubmitPlayerResultResultCallback_t {
        inline app::SubmitPlayerResultResultCallback_t__Class** type_info() {
            static app::SubmitPlayerResultResultCallback_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SubmitPlayerResultResultCallback_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SubmitPlayerResultResultCallback_t__Class* get_class() {
            return il2cpp::get_class<app::SubmitPlayerResultResultCallback_t__Class>(type_info(), "Steamworks", "SubmitPlayerResultResultCallback_t");
        }
        inline app::SubmitPlayerResultResultCallback_t* create() {
            return il2cpp::create_object<app::SubmitPlayerResultResultCallback_t>(get_class());
        }
        inline app::SubmitPlayerResultResultCallback_t__Boxed* box(app::SubmitPlayerResultResultCallback_t value) {
            return il2cpp::box_value<app::SubmitPlayerResultResultCallback_t__Boxed>(get_class(), value);
        }
    } // namespace SubmitPlayerResultResultCallback_t
} // namespace app::classes::types
