#pragma once
#include <Modloader/app/structs/KwolokNpcEntity.h>
#include <Modloader/app/structs/KwolokNpcEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokNpcEntity {
        inline app::KwolokNpcEntity__Class** type_info() {
            static app::KwolokNpcEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokNpcEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokNpcEntity__Class* get_class() {
            return il2cpp::get_class<app::KwolokNpcEntity__Class>(type_info(), "", "KwolokNpcEntity");
        }
        inline app::KwolokNpcEntity* create() {
            return il2cpp::create_object<app::KwolokNpcEntity>(get_class());
        }
    } // namespace KwolokNpcEntity
} // namespace app::classes::types
