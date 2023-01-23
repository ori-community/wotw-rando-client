#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ServerGenericAttackable__Class.h>
#include <Modloader/app/structs/ServerGenericAttackable.h>

namespace app::classes::types {
    namespace ServerGenericAttackable {
        namespace {
            inline app::ServerGenericAttackable__Class* type_info_ref = nullptr;
        }
        inline app::ServerGenericAttackable__Class** type_info = &type_info_ref;
        inline app::ServerGenericAttackable__Class* get_class() {
            return il2cpp::get_class<app::ServerGenericAttackable__Class>(type_info, "", "ServerGenericAttackable");
        }
        inline app::ServerGenericAttackable* create() {
            return il2cpp::create_object<app::ServerGenericAttackable>(get_class());
        }
    } // namespace ServerGenericAttackable
} // namespace app::classes::types
