#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DataObjectAttribute__Class.h>
#include <Modloader/app/structs/DataObjectAttribute.h>

namespace app::classes::types {
    namespace DataObjectAttribute {
        inline app::DataObjectAttribute__Class** type_info = (app::DataObjectAttribute__Class**)(modloader::win::memory::resolve_rva(0x04754E08));
        inline app::DataObjectAttribute__Class* get_class() {
            return il2cpp::get_class<app::DataObjectAttribute__Class>(type_info, "System.ComponentModel", "DataObjectAttribute");
        }
        inline app::DataObjectAttribute* create() {
            return il2cpp::create_object<app::DataObjectAttribute>(get_class());
        }
    } // namespace DataObjectAttribute
} // namespace app::classes::types
