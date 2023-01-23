#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Task__Array__Class.h>
#include <Modloader/app/structs/Task__Array.h>

namespace app::classes::types {
    namespace Task__Array {
        inline app::Task__Array__Class** type_info = (app::Task__Array__Class**)(modloader::win::memory::resolve_rva(0x0475CE10));
        inline app::Task__Array__Class* get_class() {
            return il2cpp::get_class<app::Task__Array__Class>(type_info, "System.Threading.Tasks", "Task[]");
        }
        inline app::Task__Array* create() {
            return il2cpp::create_object<app::Task__Array>(get_class());
        }
    } // namespace Task__Array
} // namespace app::classes::types
