#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsyncOperation {
        inline app::AsyncOperation__Class** type_info = (app::AsyncOperation__Class**)(modloader::win::memory::resolve_rva(0x04750C20));
        inline app::AsyncOperation__Class* get_class() {
            return il2cpp::get_class<app::AsyncOperation__Class>(type_info, "System.ComponentModel", "AsyncOperation");
        }
        inline app::AsyncOperation* create() {
            return il2cpp::create_object<app::AsyncOperation>(get_class());
        }
    } // namespace AsyncOperation
} // namespace app::classes::types
