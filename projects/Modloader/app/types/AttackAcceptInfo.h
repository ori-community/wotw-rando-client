#pragma once
#include <Modloader/app/structs/AttackAcceptInfo.h>
#include <Modloader/app/structs/AttackAcceptInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttackAcceptInfo {
        inline app::AttackAcceptInfo__Class** type_info() {
            static app::AttackAcceptInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttackAcceptInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttackAcceptInfo__Class* get_class() {
            return il2cpp::get_class<app::AttackAcceptInfo__Class>(type_info(), "", "AttackAcceptInfo");
        }
        inline app::AttackAcceptInfo* create() {
            return il2cpp::create_object<app::AttackAcceptInfo>(get_class());
        }
    } // namespace AttackAcceptInfo
} // namespace app::classes::types
