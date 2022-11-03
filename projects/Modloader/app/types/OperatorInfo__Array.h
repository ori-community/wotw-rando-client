#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OperatorInfo__Array {
        inline app::OperatorInfo__Array__Class** type_info = (app::OperatorInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04764258));
        inline app::OperatorInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::OperatorInfo__Array__Class>(type_info, "System.Data", "OperatorInfo[]");
        }
        inline app::OperatorInfo__Array* create() {
            return il2cpp::create_object<app::OperatorInfo__Array>(get_class());
        }
    } // namespace OperatorInfo__Array
} // namespace app::classes::types
