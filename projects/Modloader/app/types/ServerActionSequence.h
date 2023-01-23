#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ServerActionSequence__Class.h>
#include <Modloader/app/structs/ServerActionSequence.h>

namespace app::classes::types {
    namespace ServerActionSequence {
        namespace {
            inline app::ServerActionSequence__Class* type_info_ref = nullptr;
        }
        inline app::ServerActionSequence__Class** type_info = &type_info_ref;
        inline app::ServerActionSequence__Class* get_class() {
            return il2cpp::get_class<app::ServerActionSequence__Class>(type_info, "", "ServerActionSequence");
        }
        inline app::ServerActionSequence* create() {
            return il2cpp::create_object<app::ServerActionSequence>(get_class());
        }
    } // namespace ServerActionSequence
} // namespace app::classes::types
