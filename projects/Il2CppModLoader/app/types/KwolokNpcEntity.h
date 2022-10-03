#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokNpcEntity {
        namespace {
            app::KwolokNpcEntity__Class* type_info_ref = nullptr;
        }
        app::KwolokNpcEntity__Class** type_info = &type_info_ref;
        inline app::KwolokNpcEntity__Class* get_class() {
            return il2cpp::get_class<app::KwolokNpcEntity__Class>(type_info, "", "KwolokNpcEntity");
        }
        inline app::KwolokNpcEntity* create() {
            return il2cpp::create_object<app::KwolokNpcEntity>(get_class());
        }
    } // namespace KwolokNpcEntity
} // namespace app::classes::types
