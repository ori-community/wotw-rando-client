#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScrollFader {
        namespace {
            inline app::ScrollFader__Class* type_info_ref = nullptr;
        }
        inline app::ScrollFader__Class** type_info = &type_info_ref;
        inline app::ScrollFader__Class* get_class() {
            return il2cpp::get_class<app::ScrollFader__Class>(type_info, "", "ScrollFader");
        }
        inline app::ScrollFader* create() {
            return il2cpp::create_object<app::ScrollFader>(get_class());
        }
    } // namespace ScrollFader
} // namespace app::classes::types
