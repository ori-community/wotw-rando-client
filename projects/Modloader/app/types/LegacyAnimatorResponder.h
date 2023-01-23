#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyAnimatorResponder__Class.h>
#include <Modloader/app/structs/LegacyAnimatorResponder.h>

namespace app::classes::types {
    namespace LegacyAnimatorResponder {
        namespace {
            inline app::LegacyAnimatorResponder__Class* type_info_ref = nullptr;
        }
        inline app::LegacyAnimatorResponder__Class** type_info = &type_info_ref;
        inline app::LegacyAnimatorResponder__Class* get_class() {
            return il2cpp::get_class<app::LegacyAnimatorResponder__Class>(type_info, "", "LegacyAnimatorResponder");
        }
        inline app::LegacyAnimatorResponder* create() {
            return il2cpp::create_object<app::LegacyAnimatorResponder>(get_class());
        }
    } // namespace LegacyAnimatorResponder
} // namespace app::classes::types
