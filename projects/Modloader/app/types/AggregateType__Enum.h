#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AggregateType__Enum__Class.h>
#include <Modloader/app/structs/AggregateType__Enum.h>

namespace app::classes::types {
    namespace AggregateType__Enum {
        inline app::AggregateType__Enum__Class** type_info = (app::AggregateType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475F8C0));
        inline app::AggregateType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AggregateType__Enum__Class>(type_info, "System.Data", "AggregateType");
        }
        inline app::AggregateType__Enum* create() {
            return il2cpp::create_object<app::AggregateType__Enum>(get_class());
        }
    } // namespace AggregateType__Enum
} // namespace app::classes::types
