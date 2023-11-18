#pragma once
#include <Modloader/app/structs/ArgIterator.h>
#include <Modloader/app/structs/ArgIterator__Boxed.h>
#include <Modloader/app/structs/ArgIterator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArgIterator {
        inline app::ArgIterator__Class** type_info() {
            static app::ArgIterator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ArgIterator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ArgIterator__Class* get_class() {
            return il2cpp::get_class<app::ArgIterator__Class>(type_info(), "System", "ArgIterator");
        }
        inline app::ArgIterator* create() {
            return il2cpp::create_object<app::ArgIterator>(get_class());
        }
        inline app::ArgIterator__Boxed* box(app::ArgIterator value) {
            return il2cpp::box_value<app::ArgIterator__Boxed>(get_class(), value);
        }
    } // namespace ArgIterator
} // namespace app::classes::types
