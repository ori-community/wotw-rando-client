#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AttackAcceptInfo__Class.h>
#include <Modloader/app/structs/AttackAcceptInfo.h>

namespace app::classes::types {
    namespace AttackAcceptInfo {
        namespace {
            inline app::AttackAcceptInfo__Class* type_info_ref = nullptr;
        }
        inline app::AttackAcceptInfo__Class** type_info = &type_info_ref;
        inline app::AttackAcceptInfo__Class* get_class() {
            return il2cpp::get_class<app::AttackAcceptInfo__Class>(type_info, "", "AttackAcceptInfo");
        }
        inline app::AttackAcceptInfo* create() {
            return il2cpp::create_object<app::AttackAcceptInfo>(get_class());
        }
    } // namespace AttackAcceptInfo
} // namespace app::classes::types
