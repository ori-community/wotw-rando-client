#pragma once
#include <Modloader/app/structs/BinaryTypeEnum__Enum.h>
#include <Modloader/app/structs/BinaryTypeEnum__Enum__Array.h>
#include <Modloader/app/structs/BinaryTypeEnum__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinaryTypeEnum__Enum {
        inline app::BinaryTypeEnum__Enum__Class** type_info() {
            static app::BinaryTypeEnum__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BinaryTypeEnum__Enum__Class**)(modloader::win::memory::resolve_rva(0x047597C8));
            }
            return cache;
        }
        inline app::BinaryTypeEnum__Enum__Class* get_class() {
            return il2cpp::get_class<app::BinaryTypeEnum__Enum__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "BinaryTypeEnum");
        }
        inline app::BinaryTypeEnum__Enum* create() {
            return il2cpp::create_object<app::BinaryTypeEnum__Enum>(get_class());
        }
        inline app::BinaryTypeEnum__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::BinaryTypeEnum__Enum__Array>(get_class(), size);
        }
        inline app::BinaryTypeEnum__Enum__Array* create_array(const std::vector<app::BinaryTypeEnum__Enum*>& items) {
            return il2cpp::array_new<app::BinaryTypeEnum__Enum__Array>(get_class(), items);
        }
    } // namespace BinaryTypeEnum__Enum
} // namespace app::classes::types
