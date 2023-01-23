#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Water3Manager__Class.h>
#include <Modloader/app/structs/Water3Manager.h>

namespace app::classes::types {
    namespace Water3Manager {
        inline app::Water3Manager__Class** type_info = (app::Water3Manager__Class**)(modloader::win::memory::resolve_rva(0x0477C1B0));
        inline app::Water3Manager__Class* get_class() {
            return il2cpp::get_class<app::Water3Manager__Class>(type_info, "", "Water3Manager");
        }
        inline app::Water3Manager* create() {
            return il2cpp::create_object<app::Water3Manager>(get_class());
        }
    } // namespace Water3Manager
} // namespace app::classes::types
