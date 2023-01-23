#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XboxOneSession__Class.h>
#include <Modloader/app/structs/XboxOneSession.h>

namespace app::classes::types {
    namespace XboxOneSession {
        inline app::XboxOneSession__Class** type_info = (app::XboxOneSession__Class**)(modloader::win::memory::resolve_rva(0x04753D50));
        inline app::XboxOneSession__Class* get_class() {
            return il2cpp::get_class<app::XboxOneSession__Class>(type_info, "", "XboxOneSession");
        }
        inline app::XboxOneSession* create() {
            return il2cpp::create_object<app::XboxOneSession>(get_class());
        }
    } // namespace XboxOneSession
} // namespace app::classes::types
