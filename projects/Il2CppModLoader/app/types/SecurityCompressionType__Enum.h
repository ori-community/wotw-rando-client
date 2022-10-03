#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SecurityCompressionType__Enum {
        namespace {
            app::SecurityCompressionType__Enum__Class* type_info_ref = nullptr;
        }
        app::SecurityCompressionType__Enum__Class** type_info = &type_info_ref;
        inline app::SecurityCompressionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SecurityCompressionType__Enum__Class>(type_info, "Mono.Security.Protocol.Tls", "SecurityCompressionType");
        }
        inline app::SecurityCompressionType__Enum* create() {
            return il2cpp::create_object<app::SecurityCompressionType__Enum>(get_class());
        }
    } // namespace SecurityCompressionType__Enum
} // namespace app::classes::types
