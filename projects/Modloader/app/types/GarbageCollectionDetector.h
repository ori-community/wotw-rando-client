#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GarbageCollectionDetector__Class.h>
#include <Modloader/app/structs/GarbageCollectionDetector.h>

namespace app::classes::types {
    namespace GarbageCollectionDetector {
        inline app::GarbageCollectionDetector__Class** type_info = (app::GarbageCollectionDetector__Class**)(modloader::win::memory::resolve_rva(0x047828B0));
        inline app::GarbageCollectionDetector__Class* get_class() {
            return il2cpp::get_class<app::GarbageCollectionDetector__Class>(type_info, "", "GarbageCollectionDetector");
        }
        inline app::GarbageCollectionDetector* create() {
            return il2cpp::create_object<app::GarbageCollectionDetector>(get_class());
        }
    } // namespace GarbageCollectionDetector
} // namespace app::classes::types
