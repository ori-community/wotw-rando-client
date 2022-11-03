#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XSDSchema_NameType {
        inline app::XSDSchema_NameType__Class** type_info = (app::XSDSchema_NameType__Class**)(modloader::win::memory::resolve_rva(0x047378D0));
        inline app::XSDSchema_NameType__Class* get_class() {
            return il2cpp::get_nested_class<app::XSDSchema_NameType__Class>(type_info, "System.Data", "XSDSchema", "NameType");
        }
        inline app::XSDSchema_NameType* create() {
            return il2cpp::create_object<app::XSDSchema_NameType>(get_class());
        }
        inline app::XSDSchema_NameType__Array* create_array(int size) {
            return il2cpp::array_new<app::XSDSchema_NameType__Array>(get_class(), size);
        }
        inline app::XSDSchema_NameType__Array* create_array(const std::vector<app::XSDSchema_NameType*>& items) {
            return il2cpp::array_new<app::XSDSchema_NameType__Array>(get_class(), items);
        }
    } // namespace XSDSchema_NameType
} // namespace app::classes::types
