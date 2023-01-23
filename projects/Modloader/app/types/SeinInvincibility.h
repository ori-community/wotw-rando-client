#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinInvincibility__Class.h>
#include <Modloader/app/structs/SeinInvincibility.h>

namespace app::classes::types {
    namespace SeinInvincibility {
        namespace {
            inline app::SeinInvincibility__Class* type_info_ref = nullptr;
        }
        inline app::SeinInvincibility__Class** type_info = &type_info_ref;
        inline app::SeinInvincibility__Class* get_class() {
            return il2cpp::get_class<app::SeinInvincibility__Class>(type_info, "", "SeinInvincibility");
        }
        inline app::SeinInvincibility* create() {
            return il2cpp::create_object<app::SeinInvincibility>(get_class());
        }
    } // namespace SeinInvincibility
} // namespace app::classes::types
