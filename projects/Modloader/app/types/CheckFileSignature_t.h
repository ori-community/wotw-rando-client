#pragma once
#include <Modloader/app/structs/CheckFileSignature_t.h>
#include <Modloader/app/structs/CheckFileSignature_t__Boxed.h>
#include <Modloader/app/structs/CheckFileSignature_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CheckFileSignature_t {
        inline app::CheckFileSignature_t__Class** type_info() {
            static app::CheckFileSignature_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CheckFileSignature_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CheckFileSignature_t__Class* get_class() {
            return il2cpp::get_class<app::CheckFileSignature_t__Class>(type_info(), "Steamworks", "CheckFileSignature_t");
        }
        inline app::CheckFileSignature_t* create() {
            return il2cpp::create_object<app::CheckFileSignature_t>(get_class());
        }
        inline app::CheckFileSignature_t__Boxed* box(app::CheckFileSignature_t value) {
            return il2cpp::box_value<app::CheckFileSignature_t__Boxed>(get_class(), value);
        }
    } // namespace CheckFileSignature_t
} // namespace app::classes::types
