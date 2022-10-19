#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeyHelper {
        namespace {
            inline app::KeyHelper__Class* type_info_ref = nullptr;
        }
        inline app::KeyHelper__Class** type_info = &type_info_ref;
        inline app::KeyHelper__Class* get_class() {
            return il2cpp::get_class<app::KeyHelper__Class>(type_info, "System.Xml.Serialization", "KeyHelper");
        }
        inline app::KeyHelper* create() {
            return il2cpp::create_object<app::KeyHelper>(get_class());
        }
    } // namespace KeyHelper
} // namespace app::classes::types
