#pragma once
#include <Modloader/app/structs/Blob.h>
#include <Modloader/app/structs/Blob__Boxed.h>
#include <Modloader/app/structs/Blob__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Blob {
        inline app::Blob__Class** type_info() {
            static app::Blob__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Blob__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Blob__Class* get_class() {
            return il2cpp::get_class<app::Blob__Class>(type_info(), "System.Net", "Blob");
        }
        inline app::Blob* create() {
            return il2cpp::create_object<app::Blob>(get_class());
        }
        inline app::Blob__Boxed* box(app::Blob value) {
            return il2cpp::box_value<app::Blob__Boxed>(get_class(), value);
        }
    } // namespace Blob
} // namespace app::classes::types
