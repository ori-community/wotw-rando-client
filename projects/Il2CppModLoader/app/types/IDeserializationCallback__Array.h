#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDeserializationCallback__Array {
        namespace {
            inline app::IDeserializationCallback__Array__Class* type_info_ref = nullptr;
        }
        inline app::IDeserializationCallback__Array__Class** type_info = &type_info_ref;
        inline app::IDeserializationCallback__Array__Class* get_class() {
            return il2cpp::get_class<app::IDeserializationCallback__Array__Class>(type_info, "System.Runtime.Serialization", "IDeserializationCallback[]");
        }
        inline app::IDeserializationCallback__Array* create() {
            return il2cpp::create_object<app::IDeserializationCallback__Array>(get_class());
        }
    } // namespace IDeserializationCallback__Array
} // namespace app::classes::types
