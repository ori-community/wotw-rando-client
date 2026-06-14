#pragma once
#include <Modloader/app/structs/Void.h>
#include <Modloader/app/structs/Void__Boxed.h>
#include <Modloader/app/structs/Void__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Void {
        inline app::Void__Class** type_info() {
            static app::Void__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Void__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Void__Class* get_class() {
            return il2cpp::get_class<app::Void__Class>(type_info(), "System", "Void");
        }
        inline app::Void* create() {
            return il2cpp::create_object<app::Void>(get_class());
        }
        inline app::Void__Boxed* box(app::Void value) {
            return il2cpp::box_value<app::Void__Boxed>(get_class(), value);
        }
    } // namespace Void
} // namespace app::classes::types
