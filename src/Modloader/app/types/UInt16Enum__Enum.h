#pragma once
#include <Modloader/app/structs/UInt16Enum__Enum.h>
#include <Modloader/app/structs/UInt16Enum__Enum__Array.h>
#include <Modloader/app/structs/UInt16Enum__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UInt16Enum__Enum {
        inline app::UInt16Enum__Enum__Class** type_info() {
            static app::UInt16Enum__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UInt16Enum__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UInt16Enum__Enum__Class* get_class() {
            return il2cpp::get_class<app::UInt16Enum__Enum__Class>(type_info(), "System", "UInt16Enum");
        }
        inline app::UInt16Enum__Enum* create() {
            return il2cpp::create_object<app::UInt16Enum__Enum>(get_class());
        }
        inline app::UInt16Enum__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::UInt16Enum__Enum__Array>(get_class(), size);
        }
        inline app::UInt16Enum__Enum__Array* create_array(const std::vector<app::UInt16Enum__Enum*>& items) {
            return il2cpp::array_new<app::UInt16Enum__Enum__Array>(get_class(), items);
        }
    } // namespace UInt16Enum__Enum
} // namespace app::classes::types
