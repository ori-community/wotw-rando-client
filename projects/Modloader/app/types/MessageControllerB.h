#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MessageControllerB__Class.h>
#include <Modloader/app/structs/MessageControllerB.h>

namespace app::classes::types {
    namespace MessageControllerB {
        namespace {
            inline app::MessageControllerB__Class* type_info_ref = nullptr;
        }
        inline app::MessageControllerB__Class** type_info = &type_info_ref;
        inline app::MessageControllerB__Class* get_class() {
            return il2cpp::get_class<app::MessageControllerB__Class>(type_info, "", "MessageControllerB");
        }
        inline app::MessageControllerB* create() {
            return il2cpp::create_object<app::MessageControllerB>(get_class());
        }
    } // namespace MessageControllerB
} // namespace app::classes::types
