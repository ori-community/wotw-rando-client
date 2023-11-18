#pragma once
#include <Modloader/app/structs/BinaryTypeEnum__Enum__Array.h>
#include <Modloader/app/structs/BinaryTypeEnum__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinaryTypeEnum__Enum__Array {
        inline app::BinaryTypeEnum__Enum__Array__Class** type_info() {
            static app::BinaryTypeEnum__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BinaryTypeEnum__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04701DD8));
            }
            return cache;
        }
        inline app::BinaryTypeEnum__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::BinaryTypeEnum__Enum__Array__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "BinaryTypeEnum[]");
        }
        inline app::BinaryTypeEnum__Enum__Array* create() {
            return il2cpp::create_object<app::BinaryTypeEnum__Enum__Array>(get_class());
        }
    } // namespace BinaryTypeEnum__Enum__Array
} // namespace app::classes::types
