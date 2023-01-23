#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HammerTrail__Class.h>
#include <Modloader/app/structs/HammerTrail.h>

namespace app::classes::types {
    namespace HammerTrail {
        namespace {
            inline app::HammerTrail__Class* type_info_ref = nullptr;
        }
        inline app::HammerTrail__Class** type_info = &type_info_ref;
        inline app::HammerTrail__Class* get_class() {
            return il2cpp::get_class<app::HammerTrail__Class>(type_info, "", "HammerTrail");
        }
        inline app::HammerTrail* create() {
            return il2cpp::create_object<app::HammerTrail>(get_class());
        }
    } // namespace HammerTrail
} // namespace app::classes::types
