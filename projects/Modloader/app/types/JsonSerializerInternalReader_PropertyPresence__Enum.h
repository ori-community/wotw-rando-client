#pragma once
#include <Modloader/app/structs/JsonSerializerInternalReader_PropertyPresence__Enum.h>
#include <Modloader/app/structs/JsonSerializerInternalReader_PropertyPresence__Enum__Array.h>
#include <Modloader/app/structs/JsonSerializerInternalReader_PropertyPresence__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonSerializerInternalReader_PropertyPresence__Enum {
        inline app::JsonSerializerInternalReader_PropertyPresence__Enum__Class** type_info() {
            static app::JsonSerializerInternalReader_PropertyPresence__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JsonSerializerInternalReader_PropertyPresence__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JsonSerializerInternalReader_PropertyPresence__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonSerializerInternalReader_PropertyPresence__Enum__Class>(type_info(), "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader", "PropertyPresence");
        }
        inline app::JsonSerializerInternalReader_PropertyPresence__Enum* create() {
            return il2cpp::create_object<app::JsonSerializerInternalReader_PropertyPresence__Enum>(get_class());
        }
        inline app::JsonSerializerInternalReader_PropertyPresence__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::JsonSerializerInternalReader_PropertyPresence__Enum__Array>(get_class(), size);
        }
        inline app::JsonSerializerInternalReader_PropertyPresence__Enum__Array* create_array(const std::vector<app::JsonSerializerInternalReader_PropertyPresence__Enum*>& items) {
            return il2cpp::array_new<app::JsonSerializerInternalReader_PropertyPresence__Enum__Array>(get_class(), items);
        }
    } // namespace JsonSerializerInternalReader_PropertyPresence__Enum
} // namespace app::classes::types
