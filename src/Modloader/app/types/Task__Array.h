#pragma once
#include <Modloader/app/structs/Task__Array.h>
#include <Modloader/app/structs/Task__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Task__Array {
        inline app::Task__Array__Class** type_info() {
            static app::Task__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Task__Array__Class**)(modloader::win::memory::resolve_rva(0x0475CE10));
            }
            return cache;
        }
        inline app::Task__Array__Class* get_class() {
            return il2cpp::get_class<app::Task__Array__Class>(type_info(), "System.Threading.Tasks", "Task[]");
        }
        inline app::Task__Array* create() {
            return il2cpp::create_object<app::Task__Array>(get_class());
        }
    } // namespace Task__Array
} // namespace app::classes::types
