#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ArgIterator__Class.h>
#include <Modloader/app/structs/ArgIterator.h>
#include <Modloader/app/structs/ArgIterator__Boxed.h>

namespace app::classes::types {
    namespace ArgIterator {
        namespace {
            inline app::ArgIterator__Class* type_info_ref = nullptr;
        }
        inline app::ArgIterator__Class** type_info = &type_info_ref;
        inline app::ArgIterator__Class* get_class() {
            return il2cpp::get_class<app::ArgIterator__Class>(type_info, "System", "ArgIterator");
        }
        inline app::ArgIterator* create() {
            return il2cpp::create_object<app::ArgIterator>(get_class());
        }
        inline app::ArgIterator__Boxed* box(app::ArgIterator value) {
            return il2cpp::box_value<app::ArgIterator__Boxed>(get_class(), value);
        }
    } // namespace ArgIterator
} // namespace app::classes::types
