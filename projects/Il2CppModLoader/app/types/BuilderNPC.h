#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BuilderNPC {
        namespace {
            inline app::BuilderNPC__Class* type_info_ref = nullptr;
        }
        inline app::BuilderNPC__Class** type_info = &type_info_ref;
        inline app::BuilderNPC__Class* get_class() {
            return il2cpp::get_class<app::BuilderNPC__Class>(type_info, "", "BuilderNPC");
        }
        inline app::BuilderNPC* create() {
            return il2cpp::create_object<app::BuilderNPC>(get_class());
        }
    } // namespace BuilderNPC
} // namespace app::classes::types
