#pragma once
#include <Modloader/app/structs/Task_ContingentProperties.h>
#include <Modloader/app/structs/Task_ContingentProperties__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Task_ContingentProperties {
        inline app::Task_ContingentProperties__Class** type_info() {
            static app::Task_ContingentProperties__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Task_ContingentProperties__Class**)(modloader::win::memory::resolve_rva(0x04751888));
            }
            return cache;
        }
        inline app::Task_ContingentProperties__Class* get_class() {
            return il2cpp::get_nested_class<app::Task_ContingentProperties__Class>(type_info(), "System.Threading.Tasks", "Task", "ContingentProperties");
        }
        inline app::Task_ContingentProperties* create() {
            return il2cpp::create_object<app::Task_ContingentProperties>(get_class());
        }
    } // namespace Task_ContingentProperties
} // namespace app::classes::types
