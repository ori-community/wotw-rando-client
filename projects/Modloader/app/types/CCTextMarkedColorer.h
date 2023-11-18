#pragma once
#include <Modloader/app/structs/CCTextMarkedColorer.h>
#include <Modloader/app/structs/CCTextMarkedColorer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CCTextMarkedColorer {
        inline app::CCTextMarkedColorer__Class** type_info() {
            static app::CCTextMarkedColorer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CCTextMarkedColorer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CCTextMarkedColorer__Class* get_class() {
            return il2cpp::get_class<app::CCTextMarkedColorer__Class>(type_info(), "", "CCTextMarkedColorer");
        }
        inline app::CCTextMarkedColorer* create() {
            return il2cpp::create_object<app::CCTextMarkedColorer>(get_class());
        }
    } // namespace CCTextMarkedColorer
} // namespace app::classes::types
