#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinAttack__Class.h>
#include <Modloader/app/structs/SeinAttack.h>

namespace app::classes::types {
    namespace SeinAttack {
        namespace {
            inline app::SeinAttack__Class* type_info_ref = nullptr;
        }
        inline app::SeinAttack__Class** type_info = &type_info_ref;
        inline app::SeinAttack__Class* get_class() {
            return il2cpp::get_class<app::SeinAttack__Class>(type_info, "", "SeinAttack");
        }
        inline app::SeinAttack* create() {
            return il2cpp::create_object<app::SeinAttack>(get_class());
        }
    } // namespace SeinAttack
} // namespace app::classes::types
