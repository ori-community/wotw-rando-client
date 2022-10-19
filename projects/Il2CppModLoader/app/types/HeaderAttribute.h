#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HeaderAttribute {
        namespace {
            inline app::HeaderAttribute__Class* type_info_ref = nullptr;
        }
        inline app::HeaderAttribute__Class** type_info = &type_info_ref;
        inline app::HeaderAttribute__Class* get_class() {
            return il2cpp::get_class<app::HeaderAttribute__Class>(type_info, "UnityEngine", "HeaderAttribute");
        }
        inline app::HeaderAttribute* create() {
            return il2cpp::create_object<app::HeaderAttribute>(get_class());
        }
    } // namespace HeaderAttribute
} // namespace app::classes::types
