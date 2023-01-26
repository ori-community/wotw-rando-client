#pragma once
#include <Modloader/app/structs/GarbageCollectionDetector.h>
#include <Modloader/app/structs/GarbageCollectionDetector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GarbageCollectionDetector {
        inline app::GarbageCollectionDetector__Class** type_info() {
            static app::GarbageCollectionDetector__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GarbageCollectionDetector__Class**)(modloader::win::memory::resolve_rva(0x047828B0));
            }
            return cache;
        }
        inline app::GarbageCollectionDetector__Class* get_class() {
            return il2cpp::get_class<app::GarbageCollectionDetector__Class>(type_info(), "", "GarbageCollectionDetector");
        }
        inline app::GarbageCollectionDetector* create() {
            return il2cpp::create_object<app::GarbageCollectionDetector>(get_class());
        }
    } // namespace GarbageCollectionDetector
} // namespace app::classes::types
