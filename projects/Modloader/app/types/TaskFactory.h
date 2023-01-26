#pragma once
#include <Modloader/app/structs/TaskFactory.h>
#include <Modloader/app/structs/TaskFactory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TaskFactory {
        inline app::TaskFactory__Class** type_info() {
            static app::TaskFactory__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TaskFactory__Class**)(modloader::win::memory::resolve_rva(0x0473FE70));
            }
            return cache;
        }
        inline app::TaskFactory__Class* get_class() {
            return il2cpp::get_class<app::TaskFactory__Class>(type_info(), "System.Threading.Tasks", "TaskFactory");
        }
        inline app::TaskFactory* create() {
            return il2cpp::create_object<app::TaskFactory>(get_class());
        }
    } // namespace TaskFactory
} // namespace app::classes::types
