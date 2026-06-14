#pragma once
#include <Modloader/app/structs/BinaryArrayTypeEnum__Enum.h>
#include <Modloader/app/structs/BinaryArrayTypeEnum__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinaryArrayTypeEnum__Enum {
        inline app::BinaryArrayTypeEnum__Enum__Class** type_info() {
            static app::BinaryArrayTypeEnum__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BinaryArrayTypeEnum__Enum__Class**)(modloader::win::memory::resolve_rva(0x04740F78));
            }
            return cache;
        }
        inline app::BinaryArrayTypeEnum__Enum__Class* get_class() {
            return il2cpp::get_class<app::BinaryArrayTypeEnum__Enum__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "BinaryArrayTypeEnum");
        }
        inline app::BinaryArrayTypeEnum__Enum* create() {
            return il2cpp::create_object<app::BinaryArrayTypeEnum__Enum>(get_class());
        }
    } // namespace BinaryArrayTypeEnum__Enum
} // namespace app::classes::types
