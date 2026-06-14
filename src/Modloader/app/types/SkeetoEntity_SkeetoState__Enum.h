#pragma once
#include <Modloader/app/structs/SkeetoEntity_SkeetoState__Enum.h>
#include <Modloader/app/structs/SkeetoEntity_SkeetoState__Enum__Array.h>
#include <Modloader/app/structs/SkeetoEntity_SkeetoState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoEntity_SkeetoState__Enum {
        inline app::SkeetoEntity_SkeetoState__Enum__Class** type_info() {
            static app::SkeetoEntity_SkeetoState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoEntity_SkeetoState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoEntity_SkeetoState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SkeetoEntity_SkeetoState__Enum__Class>(type_info(), "", "SkeetoEntity", "SkeetoState");
        }
        inline app::SkeetoEntity_SkeetoState__Enum* create() {
            return il2cpp::create_object<app::SkeetoEntity_SkeetoState__Enum>(get_class());
        }
        inline app::SkeetoEntity_SkeetoState__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::SkeetoEntity_SkeetoState__Enum__Array>(get_class(), size);
        }
        inline app::SkeetoEntity_SkeetoState__Enum__Array* create_array(const std::vector<app::SkeetoEntity_SkeetoState__Enum*>& items) {
            return il2cpp::array_new<app::SkeetoEntity_SkeetoState__Enum__Array>(get_class(), items);
        }
    } // namespace SkeetoEntity_SkeetoState__Enum
} // namespace app::classes::types
