#pragma once
#include <Modloader/app/structs/DataPointType__Enum.h>
#include <Modloader/app/structs/DataPointType__Enum__Array.h>
#include <Modloader/app/structs/DataPointType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataPointType__Enum {
        inline app::DataPointType__Enum__Class** type_info() {
            static app::DataPointType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataPointType__Enum__Class**)(modloader::win::memory::resolve_rva(0x047482B8));
            }
            return cache;
        }
        inline app::DataPointType__Enum__Class* get_class() {
            return il2cpp::get_class<app::DataPointType__Enum__Class>(type_info(), "", "DataPointType");
        }
        inline app::DataPointType__Enum* create() {
            return il2cpp::create_object<app::DataPointType__Enum>(get_class());
        }
        inline app::DataPointType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::DataPointType__Enum__Array>(get_class(), size);
        }
        inline app::DataPointType__Enum__Array* create_array(const std::vector<app::DataPointType__Enum*>& items) {
            return il2cpp::array_new<app::DataPointType__Enum__Array>(get_class(), items);
        }
    } // namespace DataPointType__Enum
} // namespace app::classes::types
