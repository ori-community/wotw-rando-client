#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DialogTransition__Class.h>
#include <Modloader/app/structs/DialogTransition.h>

namespace app::classes::types {
    namespace DialogTransition {
        namespace {
            inline app::DialogTransition__Class* type_info_ref = nullptr;
        }
        inline app::DialogTransition__Class** type_info = &type_info_ref;
        inline app::DialogTransition__Class* get_class() {
            return il2cpp::get_class<app::DialogTransition__Class>(type_info, "", "DialogTransition");
        }
        inline app::DialogTransition* create() {
            return il2cpp::create_object<app::DialogTransition>(get_class());
        }
    } // namespace DialogTransition
} // namespace app::classes::types
