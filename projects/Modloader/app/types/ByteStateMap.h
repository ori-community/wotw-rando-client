#pragma once
#include <Modloader/app/structs/ByteStateMap.h>
#include <Modloader/app/structs/ByteStateMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ByteStateMap {
        inline app::ByteStateMap__Class** type_info() {
            static app::ByteStateMap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ByteStateMap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ByteStateMap__Class* get_class() {
            return il2cpp::get_class<app::ByteStateMap__Class>(type_info(), "", "ByteStateMap");
        }
        inline app::ByteStateMap* create() {
            return il2cpp::create_object<app::ByteStateMap>(get_class());
        }
    } // namespace ByteStateMap
} // namespace app::classes::types
