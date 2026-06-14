#pragma once
#include <Modloader/app/structs/SimpleJsonInstance.h>
#include <Modloader/app/structs/SimpleJsonInstance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleJsonInstance {
        inline app::SimpleJsonInstance__Class** type_info() {
            static app::SimpleJsonInstance__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SimpleJsonInstance__Class**)(modloader::win::memory::resolve_rva(0x047035B8));
            }
            return cache;
        }
        inline app::SimpleJsonInstance__Class* get_class() {
            return il2cpp::get_class<app::SimpleJsonInstance__Class>(type_info(), "PlayFab.Json", "SimpleJsonInstance");
        }
        inline app::SimpleJsonInstance* create() {
            return il2cpp::create_object<app::SimpleJsonInstance>(get_class());
        }
    } // namespace SimpleJsonInstance
} // namespace app::classes::types
