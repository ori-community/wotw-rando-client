#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ValueTuple__Class.h>
#include <Modloader/app/structs/ValueTuple.h>
#include <Modloader/app/structs/ValueTuple__Boxed.h>

namespace app::classes::types {
    namespace ValueTuple {
        inline app::ValueTuple__Class** type_info = (app::ValueTuple__Class**)(modloader::win::memory::resolve_rva(0x04730288));
        inline app::ValueTuple__Class* get_class() {
            return il2cpp::get_class<app::ValueTuple__Class>(type_info, "System", "ValueTuple");
        }
        inline app::ValueTuple* create() {
            return il2cpp::create_object<app::ValueTuple>(get_class());
        }
        inline app::ValueTuple__Boxed* box(app::ValueTuple value) {
            return il2cpp::box_value<app::ValueTuple__Boxed>(get_class(), value);
        }
    } // namespace ValueTuple
} // namespace app::classes::types
