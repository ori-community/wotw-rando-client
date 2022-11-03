#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DecimalConstantAttribute__Array {
        inline app::DecimalConstantAttribute__Array__Class** type_info = (app::DecimalConstantAttribute__Array__Class**)(modloader::win::memory::resolve_rva(0x047997D0));
        inline app::DecimalConstantAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::DecimalConstantAttribute__Array__Class>(type_info, "System.Runtime.CompilerServices", "DecimalConstantAttribute[]");
        }
        inline app::DecimalConstantAttribute__Array* create() {
            return il2cpp::create_object<app::DecimalConstantAttribute__Array>(get_class());
        }
    } // namespace DecimalConstantAttribute__Array
} // namespace app::classes::types
