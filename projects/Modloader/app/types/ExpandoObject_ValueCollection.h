#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExpandoObject_ValueCollection__Class.h>
#include <Modloader/app/structs/ExpandoObject_ValueCollection.h>

namespace app::classes::types {
    namespace ExpandoObject_ValueCollection {
        inline app::ExpandoObject_ValueCollection__Class** type_info = (app::ExpandoObject_ValueCollection__Class**)(modloader::win::memory::resolve_rva(0x047541E8));
        inline app::ExpandoObject_ValueCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::ExpandoObject_ValueCollection__Class>(type_info, "System.Dynamic", "ExpandoObject", "ValueCollection");
        }
        inline app::ExpandoObject_ValueCollection* create() {
            return il2cpp::create_object<app::ExpandoObject_ValueCollection>(get_class());
        }
    } // namespace ExpandoObject_ValueCollection
} // namespace app::classes::types
