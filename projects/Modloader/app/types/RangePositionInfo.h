#pragma once
#include <Modloader/app/structs/RangePositionInfo.h>
#include <Modloader/app/structs/RangePositionInfo__Array.h>
#include <Modloader/app/structs/RangePositionInfo__Boxed.h>
#include <Modloader/app/structs/RangePositionInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RangePositionInfo {
        inline app::RangePositionInfo__Class** type_info() {
            static app::RangePositionInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RangePositionInfo__Class**)(modloader::win::memory::resolve_rva(0x0477D7E8));
            }
            return cache;
        }
        inline app::RangePositionInfo__Class* get_class() {
            return il2cpp::get_class<app::RangePositionInfo__Class>(type_info(), "System.Xml.Schema", "RangePositionInfo");
        }
        inline app::RangePositionInfo* create() {
            return il2cpp::create_object<app::RangePositionInfo>(get_class());
        }
        inline app::RangePositionInfo__Boxed* box(app::RangePositionInfo value) {
            return il2cpp::box_value<app::RangePositionInfo__Boxed>(get_class(), value);
        }
        inline app::RangePositionInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::RangePositionInfo__Array>(get_class(), size);
        }
        inline app::RangePositionInfo__Array* create_array(const std::vector<app::RangePositionInfo>& items) {
            return il2cpp::array_new<app::RangePositionInfo__Array>(get_class(), items);
        }
    } // namespace RangePositionInfo
} // namespace app::classes::types
