#pragma once
#include <Modloader/app/structs/GarbageCollector.h>
#include <Modloader/app/structs/GarbageCollector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GarbageCollector {
        inline app::GarbageCollector__Class** type_info() {
            static app::GarbageCollector__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GarbageCollector__Class**)(modloader::win::memory::resolve_rva(0x047924B8));
            }
            return cache;
        }
        inline app::GarbageCollector__Class* get_class() {
            return il2cpp::get_class<app::GarbageCollector__Class>(type_info(), "UnityEngine.Scripting", "GarbageCollector");
        }
        inline app::GarbageCollector* create() {
            return il2cpp::create_object<app::GarbageCollector>(get_class());
        }
    } // namespace GarbageCollector
} // namespace app::classes::types
