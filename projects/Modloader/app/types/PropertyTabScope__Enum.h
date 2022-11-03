#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PropertyTabScope__Enum {
        namespace {
            inline app::PropertyTabScope__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PropertyTabScope__Enum__Class** type_info = &type_info_ref;
        inline app::PropertyTabScope__Enum__Class* get_class() {
            return il2cpp::get_class<app::PropertyTabScope__Enum__Class>(type_info, "System.ComponentModel", "PropertyTabScope");
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
