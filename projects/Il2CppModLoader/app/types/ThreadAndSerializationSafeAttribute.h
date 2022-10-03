#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ThreadAndSerializationSafeAttribute {
        namespace {
            app::ThreadAndSerializationSafeAttribute__Class* type_info_ref = nullptr;
        }
        app::ThreadAndSerializationSafeAttribute__Class** type_info = &type_info_ref;
        inline app::ThreadAndSerializationSafeAttribute__Class* get_class() {
            return il2cpp::get_class<app::ThreadAndSerializationSafeAttribute__Class>(type_info, "UnityEngine", "ThreadAndSerializationSafeAttribute");
        }
        inline app::ThreadAndSerializationSafeAttribute* create() {
            return il2cpp::create_object<app::ThreadAndSerializationSafeAttribute>(get_class());
        }
    } // namespace ThreadAndSerializationSafeAttribute
} // namespace app::classes::types
