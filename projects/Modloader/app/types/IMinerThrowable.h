#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IMinerThrowable__Class.h>

namespace app::classes::types {
    namespace IMinerThrowable {
        inline app::IMinerThrowable__Class** type_info = (app::IMinerThrowable__Class**)(modloader::win::memory::resolve_rva(0x04706510));
        inline app::IMinerThrowable__Class* get_class() {
            return il2cpp::get_class<app::IMinerThrowable__Class>(type_info, "", "IMinerThrowable");
        }
    } // namespace IMinerThrowable
} // namespace app::classes::types
