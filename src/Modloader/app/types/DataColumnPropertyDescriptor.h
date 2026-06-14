#pragma once
#include <Modloader/app/structs/DataColumnPropertyDescriptor.h>
#include <Modloader/app/structs/DataColumnPropertyDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataColumnPropertyDescriptor {
        inline app::DataColumnPropertyDescriptor__Class** type_info() {
            static app::DataColumnPropertyDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataColumnPropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0472CCE0));
            }
            return cache;
        }
        inline app::DataColumnPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::DataColumnPropertyDescriptor__Class>(type_info(), "System.Data", "DataColumnPropertyDescriptor");
        }
        inline app::DataColumnPropertyDescriptor* create() {
            return il2cpp::create_object<app::DataColumnPropertyDescriptor>(get_class());
        }
    } // namespace DataColumnPropertyDescriptor
} // namespace app::classes::types
