#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ArraySpec__Class.h>
#include <Modloader/app/structs/ArraySpec.h>

namespace app::classes::types {
    namespace ArraySpec {
        inline app::ArraySpec__Class** type_info = (app::ArraySpec__Class**)(modloader::win::memory::resolve_rva(0x047982F8));
        inline app::ArraySpec__Class* get_class() {
            return il2cpp::get_class<app::ArraySpec__Class>(type_info, "System", "ArraySpec");
        }
        inline app::ArraySpec* create() {
            return il2cpp::create_object<app::ArraySpec>(get_class());
        }
    } // namespace ArraySpec
} // namespace app::classes::types
