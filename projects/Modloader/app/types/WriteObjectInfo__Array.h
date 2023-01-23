#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WriteObjectInfo__Array__Class.h>
#include <Modloader/app/structs/WriteObjectInfo__Array.h>

namespace app::classes::types {
    namespace WriteObjectInfo__Array {
        inline app::WriteObjectInfo__Array__Class** type_info = (app::WriteObjectInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04745440));
        inline app::WriteObjectInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::WriteObjectInfo__Array__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "WriteObjectInfo[]");
        }
        inline app::WriteObjectInfo__Array* create() {
            return il2cpp::create_object<app::WriteObjectInfo__Array>(get_class());
        }
    } // namespace WriteObjectInfo__Array
} // namespace app::classes::types
