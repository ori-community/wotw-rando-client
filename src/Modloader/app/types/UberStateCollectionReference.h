#pragma once
#include <Modloader/app/structs/UberStateCollectionReference.h>
#include <Modloader/app/structs/UberStateCollectionReference__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateCollectionReference {
        inline app::UberStateCollectionReference__Class** type_info() {
            static app::UberStateCollectionReference__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberStateCollectionReference__Class**)(modloader::win::memory::resolve_rva(0x04784130));
            }
            return cache;
        }
        inline app::UberStateCollectionReference__Class* get_class() {
            return il2cpp::get_class<app::UberStateCollectionReference__Class>(type_info(), "", "UberStateCollectionReference");
        }
        inline app::UberStateCollectionReference* create() {
            return il2cpp::create_object<app::UberStateCollectionReference>(get_class());
        }
    } // namespace UberStateCollectionReference
} // namespace app::classes::types
