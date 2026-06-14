#pragma once
#include <Modloader/app/structs/TupleElementNamesAttribute.h>
#include <Modloader/app/structs/TupleElementNamesAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TupleElementNamesAttribute {
        inline app::TupleElementNamesAttribute__Class** type_info() {
            static app::TupleElementNamesAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TupleElementNamesAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TupleElementNamesAttribute__Class* get_class() {
            return il2cpp::get_class<app::TupleElementNamesAttribute__Class>(type_info(), "System.Runtime.CompilerServices", "TupleElementNamesAttribute");
        }
        inline app::TupleElementNamesAttribute* create() {
            return il2cpp::create_object<app::TupleElementNamesAttribute>(get_class());
        }
    } // namespace TupleElementNamesAttribute
} // namespace app::classes::types
