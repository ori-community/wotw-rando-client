#pragma once
#include <Modloader/app/structs/PropertyTabScope__Enum.h>
#include <Modloader/app/structs/PropertyTabScope__Enum__Array.h>
#include <Modloader/app/structs/PropertyTabScope__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PropertyTabScope__Enum {
        inline app::PropertyTabScope__Enum__Class** type_info() {
            static app::PropertyTabScope__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PropertyTabScope__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PropertyTabScope__Enum__Class* get_class() {
            return il2cpp::get_class<app::PropertyTabScope__Enum__Class>(type_info(), "System.ComponentModel", "PropertyTabScope");
        }
        inline app::PropertyTabScope__Enum* create() {
            return il2cpp::create_object<app::PropertyTabScope__Enum>(get_class());
        }
        inline app::PropertyTabScope__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::PropertyTabScope__Enum__Array>(get_class(), size);
        }
        inline app::PropertyTabScope__Enum__Array* create_array(const std::vector<app::PropertyTabScope__Enum*>& items) {
            return il2cpp::array_new<app::PropertyTabScope__Enum__Array>(get_class(), items);
        }
    } // namespace PropertyTabScope__Enum
} // namespace app::classes::types
