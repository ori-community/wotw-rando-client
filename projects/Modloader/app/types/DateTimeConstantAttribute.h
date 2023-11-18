#pragma once
#include <Modloader/app/structs/DateTimeConstantAttribute.h>
#include <Modloader/app/structs/DateTimeConstantAttribute__Array.h>
#include <Modloader/app/structs/DateTimeConstantAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateTimeConstantAttribute {
        inline app::DateTimeConstantAttribute__Class** type_info() {
            static app::DateTimeConstantAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DateTimeConstantAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DateTimeConstantAttribute__Class* get_class() {
            return il2cpp::get_class<app::DateTimeConstantAttribute__Class>(type_info(), "System.Runtime.CompilerServices", "DateTimeConstantAttribute");
        }
        inline app::DateTimeConstantAttribute* create() {
            return il2cpp::create_object<app::DateTimeConstantAttribute>(get_class());
        }
        inline app::DateTimeConstantAttribute__Array* create_array(int size) {
            return il2cpp::array_new<app::DateTimeConstantAttribute__Array>(get_class(), size);
        }
        inline app::DateTimeConstantAttribute__Array* create_array(const std::vector<app::DateTimeConstantAttribute*>& items) {
            return il2cpp::array_new<app::DateTimeConstantAttribute__Array>(get_class(), items);
        }
    } // namespace DateTimeConstantAttribute
} // namespace app::classes::types
