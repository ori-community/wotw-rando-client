#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BytePtr {
        namespace {
            inline app::BytePtr__Class* type_info_ref = nullptr;
        }
        inline app::BytePtr__Class** type_info = &type_info_ref;
        inline app::BytePtr__Class* get_class() {
            return il2cpp::get_class<app::BytePtr__Class>(type_info, "System", "Byte*");
        }
        inline app::BytePtr* create() {
            return il2cpp::create_object<app::BytePtr>(get_class());
        }
    } // namespace BytePtr
} // namespace app::classes::types
