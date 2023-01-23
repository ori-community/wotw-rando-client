#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Lever__Class.h>
#include <Modloader/app/structs/Lever.h>

namespace app::classes::types {
    namespace Lever {
        inline app::Lever__Class** type_info = (app::Lever__Class**)(modloader::win::memory::resolve_rva(0x04762480));
        inline app::Lever__Class* get_class() {
            return il2cpp::get_class<app::Lever__Class>(type_info, "", "Lever");
        }
        inline app::Lever* create() {
            return il2cpp::create_object<app::Lever>(get_class());
        }
    } // namespace Lever
} // namespace app::classes::types
