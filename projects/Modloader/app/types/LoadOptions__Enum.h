#pragma once
#include <Modloader/app/structs/LoadOptions__Enum.h>
#include <Modloader/app/structs/LoadOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadOptions__Enum {
        inline app::LoadOptions__Enum__Class** type_info() {
            static app::LoadOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LoadOptions__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LoadOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::LoadOptions__Enum__Class>(type_info(), "System.Xml.Linq", "LoadOptions");
        }
        inline app::LoadOptions__Enum* create() {
            return il2cpp::create_object<app::LoadOptions__Enum>(get_class());
        }
    } // namespace LoadOptions__Enum
} // namespace app::classes::types
