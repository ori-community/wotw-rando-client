#pragma once
#include <Modloader/app/structs/RailType__Enum.h>
#include <Modloader/app/structs/RailType__Enum__Array.h>
#include <Modloader/app/structs/RailType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RailType__Enum {
        inline app::RailType__Enum__Class** type_info() {
            static app::RailType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RailType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RailType__Enum__Class* get_class() {
            return il2cpp::get_class<app::RailType__Enum__Class>(type_info(), "", "RailType");
        }
        inline app::RailType__Enum* create() {
            return il2cpp::create_object<app::RailType__Enum>(get_class());
        }
        inline app::RailType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::RailType__Enum__Array>(get_class(), size);
        }
        inline app::RailType__Enum__Array* create_array(const std::vector<app::RailType__Enum*>& items) {
            return il2cpp::array_new<app::RailType__Enum__Array>(get_class(), items);
        }
    } // namespace RailType__Enum
} // namespace app::classes::types
