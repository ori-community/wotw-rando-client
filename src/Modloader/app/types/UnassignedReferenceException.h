#pragma once
#include <Modloader/app/structs/UnassignedReferenceException.h>
#include <Modloader/app/structs/UnassignedReferenceException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnassignedReferenceException {
        inline app::UnassignedReferenceException__Class** type_info() {
            static app::UnassignedReferenceException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnassignedReferenceException__Class**)(modloader::win::memory::resolve_rva(0x047210F0));
            }
            return cache;
        }
        inline app::UnassignedReferenceException__Class* get_class() {
            return il2cpp::get_class<app::UnassignedReferenceException__Class>(type_info(), "UnityEngine", "UnassignedReferenceException");
        }
        inline app::UnassignedReferenceException* create() {
            return il2cpp::create_object<app::UnassignedReferenceException>(get_class());
        }
    } // namespace UnassignedReferenceException
} // namespace app::classes::types
