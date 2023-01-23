#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Block5__Class.h>
#include <Modloader/app/structs/Block5.h>

namespace app::classes::types {
    namespace Block5 {
        inline app::Block5__Class** type_info = (app::Block5__Class**)(modloader::win::memory::resolve_rva(0x04771888));
        inline app::Block5__Class* get_class() {
            return il2cpp::get_class<app::Block5__Class>(type_info, "System.Linq.Expressions", "Block5");
        }
        inline app::Block5* create() {
            return il2cpp::create_object<app::Block5>(get_class());
        }
    } // namespace Block5
} // namespace app::classes::types
