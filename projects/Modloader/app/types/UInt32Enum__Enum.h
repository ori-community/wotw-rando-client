#pragma once
#include <Modloader/app/structs/UInt32Enum__Enum.h>
#include <Modloader/app/structs/UInt32Enum__Enum__Array.h>
#include <Modloader/app/structs/UInt32Enum__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UInt32Enum__Enum {
        inline app::UInt32Enum__Enum__Class** type_info() {
            static app::UInt32Enum__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UInt32Enum__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UInt32Enum__Enum__Class* get_class() {
            return il2cpp::get_class<app::UInt32Enum__Enum__Class>(type_info(), "System", "UInt32Enum");
        }
        inline app::UInt32Enum__Enum* create() {
            return il2cpp::create_object<app::UInt32Enum__Enum>(get_class());
        }
        inline app::UInt32Enum__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::UInt32Enum__Enum__Array>(get_class(), size);
        }
        inline app::UInt32Enum__Enum__Array* create_array(const std::vector<app::UInt32Enum__Enum*>& items) {
            return il2cpp::array_new<app::UInt32Enum__Enum__Array>(get_class(), items);
        }
    } // namespace UInt32Enum__Enum
} // namespace app::classes::types
