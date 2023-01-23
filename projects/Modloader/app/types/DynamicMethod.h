#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DynamicMethod__Class.h>
#include <Modloader/app/structs/DynamicMethod.h>

namespace app::classes::types {
    namespace DynamicMethod {
        inline app::DynamicMethod__Class** type_info = (app::DynamicMethod__Class**)(modloader::win::memory::resolve_rva(0x047195F8));
        inline app::DynamicMethod__Class* get_class() {
            return il2cpp::get_class<app::DynamicMethod__Class>(type_info, "System.Reflection.Emit", "DynamicMethod");
        }
        inline app::DynamicMethod* create() {
            return il2cpp::create_object<app::DynamicMethod>(get_class());
        }
    } // namespace DynamicMethod
} // namespace app::classes::types
