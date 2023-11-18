#pragma once
#include <Modloader/app/structs/GarbageRunner.h>
#include <Modloader/app/structs/GarbageRunner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GarbageRunner {
        inline app::GarbageRunner__Class** type_info() {
            static app::GarbageRunner__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GarbageRunner__Class**)(modloader::win::memory::resolve_rva(0x047124F0));
            }
            return cache;
        }
        inline app::GarbageRunner__Class* get_class() {
            return il2cpp::get_class<app::GarbageRunner__Class>(type_info(), "", "GarbageRunner");
        }
        inline app::GarbageRunner* create() {
            return il2cpp::create_object<app::GarbageRunner>(get_class());
        }
    } // namespace GarbageRunner
} // namespace app::classes::types
