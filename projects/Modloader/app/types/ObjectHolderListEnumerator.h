#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ObjectHolderListEnumerator__Class.h>
#include <Modloader/app/structs/ObjectHolderListEnumerator.h>

namespace app::classes::types {
    namespace ObjectHolderListEnumerator {
        inline app::ObjectHolderListEnumerator__Class** type_info = (app::ObjectHolderListEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0472B898));
        inline app::ObjectHolderListEnumerator__Class* get_class() {
            return il2cpp::get_class<app::ObjectHolderListEnumerator__Class>(type_info, "System.Runtime.Serialization", "ObjectHolderListEnumerator");
        }
        inline app::ObjectHolderListEnumerator* create() {
            return il2cpp::create_object<app::ObjectHolderListEnumerator>(get_class());
        }
    } // namespace ObjectHolderListEnumerator
} // namespace app::classes::types
