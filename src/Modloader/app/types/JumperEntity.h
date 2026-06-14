#pragma once
#include <Modloader/app/structs/JumperEntity.h>
#include <Modloader/app/structs/JumperEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumperEntity {
        inline app::JumperEntity__Class** type_info() {
            static app::JumperEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JumperEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JumperEntity__Class* get_class() {
            return il2cpp::get_class<app::JumperEntity__Class>(type_info(), "", "JumperEntity");
        }
        inline app::JumperEntity* create() {
            return il2cpp::create_object<app::JumperEntity>(get_class());
        }
    } // namespace JumperEntity
} // namespace app::classes::types
