#pragma once
#include <Modloader/app/structs/DeflateFlavor__Enum.h>
#include <Modloader/app/structs/DeflateFlavor__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeflateFlavor__Enum {
        inline app::DeflateFlavor__Enum__Class** type_info() {
            static app::DeflateFlavor__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeflateFlavor__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeflateFlavor__Enum__Class* get_class() {
            return il2cpp::get_class<app::DeflateFlavor__Enum__Class>(type_info(), "Ionic.Zlib", "DeflateFlavor");
        }
        inline app::DeflateFlavor__Enum* create() {
            return il2cpp::create_object<app::DeflateFlavor__Enum>(get_class());
        }
    } // namespace DeflateFlavor__Enum
} // namespace app::classes::types
