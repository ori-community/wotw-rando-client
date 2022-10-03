#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BytePtr {
        namespace {
            app::BytePtr__Class* type_info_ref = nullptr;
        }
        app::BytePtr__Class** type_info = &type_info_ref;
        inline app::BytePtr__Class* get_class() {
            return il2cpp::get_class<app::BytePtr__Class>(type_info, "System", "Byte*");
        }
        inline app::BytePtr* create() {
            return il2cpp::create_object<app::BytePtr>(get_class());
        }
    } // namespace BytePtr
} // namespace app::classes::types
