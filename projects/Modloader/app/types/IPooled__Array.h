#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IPooled__Array__Class.h>
#include <Modloader/app/structs/IPooled__Array.h>

namespace app::classes::types {
    namespace IPooled__Array {
        inline app::IPooled__Array__Class** type_info = (app::IPooled__Array__Class**)(modloader::win::memory::resolve_rva(0x04717A38));
        inline app::IPooled__Array__Class* get_class() {
            return il2cpp::get_class<app::IPooled__Array__Class>(type_info, "", "IPooled[]");
        }
        inline app::IPooled__Array* create() {
            return il2cpp::create_object<app::IPooled__Array>(get_class());
        }
    } // namespace IPooled__Array
} // namespace app::classes::types
