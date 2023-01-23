#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IntRange__Class.h>
#include <Modloader/app/structs/IntRange.h>
#include <Modloader/app/structs/IntRange__Boxed.h>

namespace app::classes::types {
    namespace IntRange {
        namespace {
            inline app::IntRange__Class* type_info_ref = nullptr;
        }
        inline app::IntRange__Class** type_info = &type_info_ref;
        inline app::IntRange__Class* get_class() {
            return il2cpp::get_class<app::IntRange__Class>(type_info, "Swing", "IntRange");
        }
        inline app::IntRange* create() {
            return il2cpp::create_object<app::IntRange>(get_class());
        }
        inline app::IntRange__Boxed* box(app::IntRange value) {
            return il2cpp::box_value<app::IntRange__Boxed>(get_class(), value);
        }
    } // namespace IntRange
} // namespace app::classes::types
