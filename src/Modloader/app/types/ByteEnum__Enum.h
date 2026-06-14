#pragma once
#include <Modloader/app/structs/ByteEnum__Enum.h>
#include <Modloader/app/structs/ByteEnum__Enum__Array.h>
#include <Modloader/app/structs/ByteEnum__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ByteEnum__Enum {
        inline app::ByteEnum__Enum__Class** type_info() {
            static app::ByteEnum__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ByteEnum__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470A360));
            }
            return cache;
        }
        inline app::ByteEnum__Enum__Class* get_class() {
            return il2cpp::get_class<app::ByteEnum__Enum__Class>(type_info(), "System", "ByteEnum");
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
