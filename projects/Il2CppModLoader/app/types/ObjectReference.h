#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ObjectReference {
        namespace {
            inline app::ObjectReference__Class* type_info_ref = nullptr;
        }
        inline app::ObjectReference__Class** type_info = &type_info_ref;
        inline app::ObjectReference__Class* get_class() {
            return il2cpp::get_class<app::ObjectReference__Class>(type_info, "", "ObjectReference");
        }
        inline app::ObjectReference* create() {
            return il2cpp::create_object<app::ObjectReference>(get_class());
        }
        inline app::ObjectReference__Array* create_array(int size) {
            return il2cpp::array_new<app::ObjectReference__Array>(get_class(), size);
        }
        inline app::ObjectReference__Array* create_array(const std::vector<app::ObjectReference*>& items) {
            return il2cpp::array_new<app::ObjectReference__Array>(get_class(), items);
        }
    } // namespace ObjectReference
} // namespace app::classes::types
