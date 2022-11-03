#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExceptionDispatchInfo__Array {
        inline app::ExceptionDispatchInfo__Array__Class** type_info = (app::ExceptionDispatchInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04743710));
        inline app::ExceptionDispatchInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::ExceptionDispatchInfo__Array__Class>(type_info, "System.Runtime.ExceptionServices", "ExceptionDispatchInfo[]");
        }
        inline app::ExceptionDispatchInfo__Array* create() {
            return il2cpp::create_object<app::ExceptionDispatchInfo__Array>(get_class());
        }
    } // namespace ExceptionDispatchInfo__Array
} // namespace app::classes::types
