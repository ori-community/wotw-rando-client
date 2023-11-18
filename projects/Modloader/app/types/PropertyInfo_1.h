#pragma once
#include <Modloader/app/structs/PropertyInfo_1.h>
#include <Modloader/app/structs/PropertyInfo_1__Array.h>
#include <Modloader/app/structs/PropertyInfo_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PropertyInfo_1 {
        inline app::PropertyInfo_1__Class** type_info() {
            static app::PropertyInfo_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PropertyInfo_1__Class**)(modloader::win::memory::resolve_rva(0x04788340));
            }
            return cache;
        }
        inline app::PropertyInfo_1__Class* get_class() {
            return il2cpp::get_class<app::PropertyInfo_1__Class>(type_info(), "System.Reflection", "PropertyInfo");
        }
        inline app::PropertyInfo_1* create() {
            return il2cpp::create_object<app::PropertyInfo_1>(get_class());
        }
        inline app::PropertyInfo_1__Array* create_array(int size) {
            return il2cpp::array_new<app::PropertyInfo_1__Array>(get_class(), size);
        }
        inline app::PropertyInfo_1__Array* create_array(const std::vector<app::PropertyInfo_1*>& items) {
            return il2cpp::array_new<app::PropertyInfo_1__Array>(get_class(), items);
        }
    } // namespace PropertyInfo_1
} // namespace app::classes::types
