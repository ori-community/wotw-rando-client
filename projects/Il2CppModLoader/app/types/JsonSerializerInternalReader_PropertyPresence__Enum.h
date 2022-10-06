#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonSerializerInternalReader_PropertyPresence__Enum {
        namespace {
            app::JsonSerializerInternalReader_PropertyPresence__Enum__Class* type_info_ref = nullptr;
        }
        app::JsonSerializerInternalReader_PropertyPresence__Enum__Class** type_info = &type_info_ref;
        inline app::JsonSerializerInternalReader_PropertyPresence__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonSerializerInternalReader_PropertyPresence__Enum__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader", "PropertyPresence");
        }
        inline app::JsonSerializerInternalReader_PropertyPresence__Enum* create() {
            return il2cpp::create_object<app::JsonSerializerInternalReader_PropertyPresence__Enum>(get_class());
        }
        inline app::JsonSerializerInternalReader_PropertyPresence__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::JsonSerializerInternalReader_PropertyPresence__Enum__Array>(get_class(), size);
        }
        inline app::JsonSerializerInternalReader_PropertyPresence__Enum__Array* create_array(const std::vector<app::JsonSerializerInternalReader_PropertyPresence__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::JsonSerializerInternalReader_PropertyPresence__Enum__Array>(get_class(), items);
        }
    } // namespace JsonSerializerInternalReader_PropertyPresence__Enum
} // namespace app::classes::types
