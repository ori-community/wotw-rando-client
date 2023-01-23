#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DateTimeConstantAttribute__Class.h>
#include <Modloader/app/structs/DateTimeConstantAttribute.h>
#include <Modloader/app/structs/DateTimeConstantAttribute__Array.h>

namespace app::classes::types {
    namespace DateTimeConstantAttribute {
        namespace {
            inline app::DateTimeConstantAttribute__Class* type_info_ref = nullptr;
        }
        inline app::DateTimeConstantAttribute__Class** type_info = &type_info_ref;
        inline app::DateTimeConstantAttribute__Class* get_class() {
            return il2cpp::get_class<app::DateTimeConstantAttribute__Class>(type_info, "System.Runtime.CompilerServices", "DateTimeConstantAttribute");
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
