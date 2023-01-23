#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinHold__Class.h>
#include <Modloader/app/structs/SeinHold.h>

namespace app::classes::types {
    namespace SeinHold {
        inline app::SeinHold__Class** type_info = (app::SeinHold__Class**)(modloader::win::memory::resolve_rva(0x0473A918));
        inline app::SeinHold__Class* get_class() {
            return il2cpp::get_class<app::SeinHold__Class>(type_info, "", "SeinHold");
        }
        inline app::SeinHold* create() {
            return il2cpp::create_object<app::SeinHold>(get_class());
        }
    } // namespace SeinHold
} // namespace app::classes::types
