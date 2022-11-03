#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ByteEnum__Enum {
        inline app::ByteEnum__Enum__Class** type_info = (app::ByteEnum__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470A360));
        inline app::ByteEnum__Enum__Class* get_class() {
            return il2cpp::get_class<app::ByteEnum__Enum__Class>(type_info, "System", "ByteEnum");
        }
        inline app::ByteEnum__Enum* create() {
            return il2cpp::create_object<app::ByteEnum__Enum>(get_class());
        }
        inline app::ByteEnum__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::ByteEnum__Enum__Array>(get_class(), size);
        }
        inline app::ByteEnum__Enum__Array* create_array(const std::vector<app::ByteEnum__Enum*>& items) {
            return il2cpp::array_new<app::ByteEnum__Enum__Array>(get_class(), items);
        }
    } // namespace ByteEnum__Enum
} // namespace app::classes::types
