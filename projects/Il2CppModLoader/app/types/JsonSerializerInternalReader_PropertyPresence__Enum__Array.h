#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonSerializerInternalReader_PropertyPresence__Enum__Array {
        namespace {
            inline app::JsonSerializerInternalReader_PropertyPresence__Enum__Array__Class* type_info_ref = nullptr;
        }
        inline app::JsonSerializerInternalReader_PropertyPresence__Enum__Array__Class** type_info = &type_info_ref;
        inline app::JsonSerializerInternalReader_PropertyPresence__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::JsonSerializerInternalReader_PropertyPresence__Enum__Array__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader+PropertyPresence[]");
        }
        inline app::JsonSerializerInternalReader_PropertyPresence__Enum__Array* create() {
            return il2cpp::create_object<app::JsonSerializerInternalReader_PropertyPresence__Enum__Array>(get_class());
        }
    } // namespace JsonSerializerInternalReader_PropertyPresence__Enum__Array
} // namespace app::classes::types
