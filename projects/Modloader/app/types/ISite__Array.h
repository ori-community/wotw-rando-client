#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ISite__Array__Class.h>
#include <Modloader/app/structs/ISite__Array.h>

namespace app::classes::types {
    namespace ISite__Array {
        inline app::ISite__Array__Class** type_info = (app::ISite__Array__Class**)(modloader::win::memory::resolve_rva(0x047598B8));
        inline app::ISite__Array__Class* get_class() {
            return il2cpp::get_class<app::ISite__Array__Class>(type_info, "System.ComponentModel", "ISite[]");
        }
        inline app::ISite__Array* create() {
            return il2cpp::create_object<app::ISite__Array>(get_class());
        }
    } // namespace ISite__Array
} // namespace app::classes::types
