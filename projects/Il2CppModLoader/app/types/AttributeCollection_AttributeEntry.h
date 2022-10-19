#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttributeCollection_AttributeEntry {
        namespace {
            inline app::AttributeCollection_AttributeEntry__Class* type_info_ref = nullptr;
        }
        inline app::AttributeCollection_AttributeEntry__Class** type_info = &type_info_ref;
        inline app::AttributeCollection_AttributeEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::AttributeCollection_AttributeEntry__Class>(type_info, "System.ComponentModel", "AttributeCollection", "AttributeEntry");
        }
        inline app::AttributeCollection_AttributeEntry* create() {
            return il2cpp::create_object<app::AttributeCollection_AttributeEntry>(get_class());
        }
        inline app::AttributeCollection_AttributeEntry__Boxed* box(app::AttributeCollection_AttributeEntry value) {
            return il2cpp::box_value<app::AttributeCollection_AttributeEntry__Boxed>(get_class(), value);
        }
        inline app::AttributeCollection_AttributeEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::AttributeCollection_AttributeEntry__Array>(get_class(), size);
        }
        inline app::AttributeCollection_AttributeEntry__Array* create_array(const std::vector<app::AttributeCollection_AttributeEntry>& items) {
            return il2cpp::array_new<app::AttributeCollection_AttributeEntry__Array>(get_class(), items);
        }
    } // namespace AttributeCollection_AttributeEntry
} // namespace app::classes::types
