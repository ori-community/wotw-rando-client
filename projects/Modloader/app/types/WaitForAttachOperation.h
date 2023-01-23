#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaitForAttachOperation__Class.h>
#include <Modloader/app/structs/WaitForAttachOperation.h>

namespace app::classes::types {
    namespace WaitForAttachOperation {
        inline app::WaitForAttachOperation__Class** type_info = (app::WaitForAttachOperation__Class**)(modloader::win::memory::resolve_rva(0x0474E628));
        inline app::WaitForAttachOperation__Class* get_class() {
            return il2cpp::get_class<app::WaitForAttachOperation__Class>(type_info, "frameworks.loading.Prewarmers", "WaitForAttachOperation");
        }
        inline app::WaitForAttachOperation* create() {
            return il2cpp::create_object<app::WaitForAttachOperation>(get_class());
        }
    } // namespace WaitForAttachOperation
} // namespace app::classes::types
