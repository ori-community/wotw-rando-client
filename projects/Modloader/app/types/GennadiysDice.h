#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GennadiysDice {
        inline app::GennadiysDice__Class** type_info = (app::GennadiysDice__Class**)(modloader::win::memory::resolve_rva(0x0478DDB8));
        inline app::GennadiysDice__Class* get_class() {
            return il2cpp::get_class<app::GennadiysDice__Class>(type_info, "Moon.Timeline", "GennadiysDice");
        }
        inline app::GennadiysDice* create() {
            return il2cpp::create_object<app::GennadiysDice>(get_class());
        }
    } // namespace GennadiysDice
} // namespace app::classes::types
