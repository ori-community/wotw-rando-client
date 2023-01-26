#pragma once
#include <Modloader/app/structs/EntityControllerBT.h>
#include <Modloader/app/structs/EntityControllerBT__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityControllerBT {
        inline app::EntityControllerBT__Class** type_info() {
            static app::EntityControllerBT__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityControllerBT__Class**)(modloader::win::memory::resolve_rva(0x04755B80));
            }
            return cache;
        }
        inline app::EntityControllerBT__Class* get_class() {
            return il2cpp::get_class<app::EntityControllerBT__Class>(type_info(), "", "EntityControllerBT");
        }
        inline app::EntityControllerBT* create() {
            return il2cpp::create_object<app::EntityControllerBT>(get_class());
        }
    } // namespace EntityControllerBT
} // namespace app::classes::types
