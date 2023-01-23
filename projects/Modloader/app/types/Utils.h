#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Utils__Class.h>
#include <Modloader/app/structs/Utils.h>

namespace app::classes::types {
    namespace Utils {
        inline app::Utils__Class** type_info = (app::Utils__Class**)(modloader::win::memory::resolve_rva(0x047128A0));
        inline app::Utils__Class* get_class() {
            return il2cpp::get_class<app::Utils__Class>(type_info, "System.Security.Cryptography", "Utils");
        }
        inline app::Utils* create() {
            return il2cpp::create_object<app::Utils>(get_class());
        }
    } // namespace Utils
} // namespace app::classes::types
