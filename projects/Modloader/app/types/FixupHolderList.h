#pragma once
#include <Modloader/app/structs/FixupHolderList.h>
#include <Modloader/app/structs/FixupHolderList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixupHolderList {
        inline app::FixupHolderList__Class** type_info() {
            static app::FixupHolderList__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FixupHolderList__Class**)(modloader::win::memory::resolve_rva(0x047909E8));
            }
            return cache;
        }
        inline app::FixupHolderList__Class* get_class() {
            return il2cpp::get_class<app::FixupHolderList__Class>(type_info(), "System.Runtime.Serialization", "FixupHolderList");
        }
        inline app::FixupHolderList* create() {
            return il2cpp::create_object<app::FixupHolderList>(get_class());
        }
    } // namespace FixupHolderList
} // namespace app::classes::types
