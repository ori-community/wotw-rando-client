#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Water__Class.h>
#include <Modloader/app/structs/Water.h>

namespace app::classes::types {
    namespace Water {
        inline app::Water__Class** type_info = (app::Water__Class**)(modloader::win::memory::resolve_rva(0x04782AF0));
        inline app::Water__Class* get_class() {
            return il2cpp::get_class<app::Water__Class>(type_info, "", "Water");
        }
        inline app::Water* create() {
            return il2cpp::create_object<app::Water>(get_class());
        }
    } // namespace Water
} // namespace app::classes::types
