#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ThreadAndSerializationSafeAttribute {
        namespace {
            inline app::ThreadAndSerializationSafeAttribute__Class* type_info_ref = nullptr;
        }
        inline app::ThreadAndSerializationSafeAttribute__Class** type_info = &type_info_ref;
        inline app::ThreadAndSerializationSafeAttribute__Class* get_class() {
            return il2cpp::get_class<app::ThreadAndSerializationSafeAttribute__Class>(type_info, "UnityEngine", "ThreadAndSerializationSafeAttribute");
        }
        inline app::ThreadAndSerializationSafeAttribute* create() {
            return il2cpp::create_object<app::ThreadAndSerializationSafeAttribute>(get_class());
        }
    } // namespace ThreadAndSerializationSafeAttribute
} // namespace app::classes::types
