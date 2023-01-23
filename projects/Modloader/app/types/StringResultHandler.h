#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StringResultHandler__Class.h>
#include <Modloader/app/structs/StringResultHandler.h>

namespace app::classes::types {
    namespace StringResultHandler {
        inline app::StringResultHandler__Class** type_info = (app::StringResultHandler__Class**)(modloader::win::memory::resolve_rva(0x04751DE0));
        inline app::StringResultHandler__Class* get_class() {
            return il2cpp::get_class<app::StringResultHandler__Class>(type_info, "System.IO", "StringResultHandler");
        }
        inline app::StringResultHandler* create() {
            return il2cpp::create_object<app::StringResultHandler>(get_class());
        }
    } // namespace StringResultHandler
} // namespace app::classes::types
