#pragma once
#include <Modloader/app/structs/ObjectHolderListEnumerator.h>
#include <Modloader/app/structs/ObjectHolderListEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectHolderListEnumerator {
        inline app::ObjectHolderListEnumerator__Class** type_info() {
            static app::ObjectHolderListEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ObjectHolderListEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0472B898));
            }
            return cache;
        }
        inline app::ObjectHolderListEnumerator__Class* get_class() {
            return il2cpp::get_class<app::ObjectHolderListEnumerator__Class>(type_info(), "System.Runtime.Serialization", "ObjectHolderListEnumerator");
        }
        inline app::ObjectHolderListEnumerator* create() {
            return il2cpp::create_object<app::ObjectHolderListEnumerator>(get_class());
        }
    } // namespace ObjectHolderListEnumerator
} // namespace app::classes::types
