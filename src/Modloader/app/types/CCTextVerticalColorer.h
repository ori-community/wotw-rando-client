#pragma once
#include <Modloader/app/structs/CCTextVerticalColorer.h>
#include <Modloader/app/structs/CCTextVerticalColorer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CCTextVerticalColorer {
        inline app::CCTextVerticalColorer__Class** type_info() {
            static app::CCTextVerticalColorer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CCTextVerticalColorer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CCTextVerticalColorer__Class* get_class() {
            return il2cpp::get_class<app::CCTextVerticalColorer__Class>(type_info(), "", "CCTextVerticalColorer");
        }
        inline app::CCTextVerticalColorer* create() {
            return il2cpp::create_object<app::CCTextVerticalColorer>(get_class());
        }
    } // namespace CCTextVerticalColorer
} // namespace app::classes::types
