#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SBytePtr {
        namespace {
            inline app::SBytePtr__Class* type_info_ref = nullptr;
        }
        inline app::SBytePtr__Class** type_info = &type_info_ref;
        inline app::SBytePtr__Class* get_class() {
            return il2cpp::get_class<app::SBytePtr__Class>(type_info, "System", "SByte*");
        }
        inline app::SBytePtr* create() {
            return il2cpp::create_object<app::SBytePtr>(get_class());
        }
    } // namespace SBytePtr
} // namespace app::classes::types
