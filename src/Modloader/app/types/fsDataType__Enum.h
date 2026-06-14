#pragma once
#include <Modloader/app/structs/fsDataType__Enum.h>
#include <Modloader/app/structs/fsDataType__Enum__Array.h>
#include <Modloader/app/structs/fsDataType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsDataType__Enum {
        inline app::fsDataType__Enum__Class** type_info() {
            static app::fsDataType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsDataType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04719398));
            }
            return cache;
        }
        inline app::fsDataType__Enum__Class* get_class() {
            return il2cpp::get_class<app::fsDataType__Enum__Class>(type_info(), "FullSerializer", "fsDataType");
        }
        inline app::fsDataType__Enum* create() {
            return il2cpp::create_object<app::fsDataType__Enum>(get_class());
        }
        inline app::fsDataType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::fsDataType__Enum__Array>(get_class(), size);
        }
        inline app::fsDataType__Enum__Array* create_array(const std::vector<app::fsDataType__Enum*>& items) {
            return il2cpp::array_new<app::fsDataType__Enum__Array>(get_class(), items);
        }
    } // namespace fsDataType__Enum
} // namespace app::classes::types
