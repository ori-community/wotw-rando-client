#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DestroyObjectAction__Class.h>
#include <Modloader/app/structs/DestroyObjectAction.h>

namespace app::classes::types {
    namespace DestroyObjectAction {
        namespace {
            inline app::DestroyObjectAction__Class* type_info_ref = nullptr;
        }
        inline app::DestroyObjectAction__Class** type_info = &type_info_ref;
        inline app::DestroyObjectAction__Class* get_class() {
            return il2cpp::get_class<app::DestroyObjectAction__Class>(type_info, "", "DestroyObjectAction");
        }
        inline app::DestroyObjectAction* create() {
            return il2cpp::create_object<app::DestroyObjectAction>(get_class());
        }
    } // namespace DestroyObjectAction
} // namespace app::classes::types
