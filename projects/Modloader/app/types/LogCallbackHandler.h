#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LogCallbackHandler__Class.h>
#include <Modloader/app/structs/LogCallbackHandler.h>

namespace app::classes::types {
    namespace LogCallbackHandler {
        inline app::LogCallbackHandler__Class** type_info = (app::LogCallbackHandler__Class**)(modloader::win::memory::resolve_rva(0x04769C08));
        inline app::LogCallbackHandler__Class* get_class() {
            return il2cpp::get_class<app::LogCallbackHandler__Class>(type_info, "", "LogCallbackHandler");
        }
        inline app::LogCallbackHandler* create() {
            return il2cpp::create_object<app::LogCallbackHandler>(get_class());
        }
    } // namespace LogCallbackHandler
} // namespace app::classes::types
