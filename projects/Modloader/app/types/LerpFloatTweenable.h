#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LerpFloatTweenable__Class.h>
#include <Modloader/app/structs/LerpFloatTweenable.h>

namespace app::classes::types {
    namespace LerpFloatTweenable {
        inline app::LerpFloatTweenable__Class** type_info = (app::LerpFloatTweenable__Class**)(modloader::win::memory::resolve_rva(0x0471BA38));
        inline app::LerpFloatTweenable__Class* get_class() {
            return il2cpp::get_class<app::LerpFloatTweenable__Class>(type_info, "Moon", "LerpFloatTweenable");
        }
        inline app::LerpFloatTweenable* create() {
            return il2cpp::create_object<app::LerpFloatTweenable>(get_class());
        }
    } // namespace LerpFloatTweenable
} // namespace app::classes::types
