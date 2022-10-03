#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StreamingContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StreamingContext__Class** type_info;
        inline app::StreamingContext__Class* get_class() {
            return il2cpp::get_class<app::StreamingContext__Class>(type_info, "System.Runtime.Serialization", "StreamingContext");
        }
        inline app::StreamingContext* create() {
            return il2cpp::create_object<app::StreamingContext>(get_class());
        }
        inline app::StreamingContext__Boxed* box(app::StreamingContext value) {
            return il2cpp::box_value<app::StreamingContext__Boxed>(get_class(), value);
        }
    } // namespace StreamingContext
} // namespace app::classes::types
