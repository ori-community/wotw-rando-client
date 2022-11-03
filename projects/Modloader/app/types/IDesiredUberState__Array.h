#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDesiredUberState__Array {
        inline app::IDesiredUberState__Array__Class** type_info = (app::IDesiredUberState__Array__Class**)(modloader::win::memory::resolve_rva(0x0470B538));
        inline app::IDesiredUberState__Array__Class* get_class() {
            return il2cpp::get_class<app::IDesiredUberState__Array__Class>(type_info, "", "IDesiredUberState[]");
        }
        inline app::IDesiredUberState__Array* create() {
            return il2cpp::create_object<app::IDesiredUberState__Array>(get_class());
        }
    } // namespace IDesiredUberState__Array
} // namespace app::classes::types
