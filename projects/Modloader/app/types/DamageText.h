#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageText {
        namespace {
            inline app::DamageText__Class* type_info_ref = nullptr;
        }
        inline app::DamageText__Class** type_info = &type_info_ref;
        inline app::DamageText__Class* get_class() {
            return il2cpp::get_class<app::DamageText__Class>(type_info, "", "DamageText");
        }
        inline app::DamageText* create() {
            return il2cpp::create_object<app::DamageText>(get_class());
        }
    } // namespace DamageText
} // namespace app::classes::types
