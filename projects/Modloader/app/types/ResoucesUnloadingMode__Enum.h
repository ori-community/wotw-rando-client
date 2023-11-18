#pragma once
#include <Modloader/app/structs/ResoucesUnloadingMode__Enum.h>
#include <Modloader/app/structs/ResoucesUnloadingMode__Enum__Array.h>
#include <Modloader/app/structs/ResoucesUnloadingMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResoucesUnloadingMode__Enum {
        inline app::ResoucesUnloadingMode__Enum__Class** type_info() {
            static app::ResoucesUnloadingMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ResoucesUnloadingMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ResoucesUnloadingMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ResoucesUnloadingMode__Enum__Class>(type_info(), "", "ResoucesUnloadingMode");
        }
        inline app::ResoucesUnloadingMode__Enum* create() {
            return il2cpp::create_object<app::ResoucesUnloadingMode__Enum>(get_class());
        }
        inline app::ResoucesUnloadingMode__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::ResoucesUnloadingMode__Enum__Array>(get_class(), size);
        }
        inline app::ResoucesUnloadingMode__Enum__Array* create_array(const std::vector<app::ResoucesUnloadingMode__Enum*>& items) {
            return il2cpp::array_new<app::ResoucesUnloadingMode__Enum__Array>(get_class(), items);
        }
    } // namespace ResoucesUnloadingMode__Enum
} // namespace app::classes::types
