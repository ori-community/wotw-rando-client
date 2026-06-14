#pragma once
#include <Modloader/app/structs/SaveOptions__Enum.h>
#include <Modloader/app/structs/SaveOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveOptions__Enum {
        inline app::SaveOptions__Enum__Class** type_info() {
            static app::SaveOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SaveOptions__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472EFD8));
            }
            return cache;
        }
        inline app::SaveOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::SaveOptions__Enum__Class>(type_info(), "System.Xml.Linq", "SaveOptions");
        }
        inline app::SaveOptions__Enum* create() {
            return il2cpp::create_object<app::SaveOptions__Enum>(get_class());
        }
    } // namespace SaveOptions__Enum
} // namespace app::classes::types
