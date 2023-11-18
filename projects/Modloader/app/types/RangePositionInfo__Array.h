#pragma once
#include <Modloader/app/structs/RangePositionInfo__Array.h>
#include <Modloader/app/structs/RangePositionInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RangePositionInfo__Array {
        inline app::RangePositionInfo__Array__Class** type_info() {
            static app::RangePositionInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RangePositionInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RangePositionInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::RangePositionInfo__Array__Class>(type_info(), "System.Xml.Schema", "RangePositionInfo[]");
        }
        inline app::RangePositionInfo__Array* create() {
            return il2cpp::create_object<app::RangePositionInfo__Array>(get_class());
        }
    } // namespace RangePositionInfo__Array
} // namespace app::classes::types
