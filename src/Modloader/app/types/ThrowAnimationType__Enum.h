#pragma once
#include <Modloader/app/structs/ThrowAnimationType__Enum.h>
#include <Modloader/app/structs/ThrowAnimationType__Enum__Array.h>
#include <Modloader/app/structs/ThrowAnimationType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThrowAnimationType__Enum {
        inline app::ThrowAnimationType__Enum__Class** type_info() {
            static app::ThrowAnimationType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ThrowAnimationType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ThrowAnimationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ThrowAnimationType__Enum__Class>(type_info(), "Moon", "ThrowAnimationType");
        }
        inline app::ThrowAnimationType__Enum* create() {
            return il2cpp::create_object<app::ThrowAnimationType__Enum>(get_class());
        }
        inline app::ThrowAnimationType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::ThrowAnimationType__Enum__Array>(get_class(), size);
        }
        inline app::ThrowAnimationType__Enum__Array* create_array(const std::vector<app::ThrowAnimationType__Enum*>& items) {
            return il2cpp::array_new<app::ThrowAnimationType__Enum__Array>(get_class(), items);
        }
    } // namespace ThrowAnimationType__Enum
} // namespace app::classes::types
