#pragma once
#include <Modloader/app/structs/DeathWispsManager.h>
#include <Modloader/app/structs/DeathWispsManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeathWispsManager {
        inline app::DeathWispsManager__Class** type_info() {
            static app::DeathWispsManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeathWispsManager__Class**)(modloader::win::memory::resolve_rva(0x047437C0));
            }
            return cache;
        }
        inline app::DeathWispsManager__Class* get_class() {
            return il2cpp::get_class<app::DeathWispsManager__Class>(type_info(), "", "DeathWispsManager");
        }
        inline app::DeathWispsManager* create() {
            return il2cpp::create_object<app::DeathWispsManager>(get_class());
        }
    } // namespace DeathWispsManager
} // namespace app::classes::types
