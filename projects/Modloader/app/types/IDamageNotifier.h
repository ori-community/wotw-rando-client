#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IDamageNotifier__Class.h>

namespace app::classes::types {
    namespace IDamageNotifier {
        inline app::IDamageNotifier__Class** type_info = (app::IDamageNotifier__Class**)(modloader::win::memory::resolve_rva(0x04773640));
        inline app::IDamageNotifier__Class* get_class() {
            return il2cpp::get_class<app::IDamageNotifier__Class>(type_info, "", "IDamageNotifier");
        }
    } // namespace IDamageNotifier
} // namespace app::classes::types
