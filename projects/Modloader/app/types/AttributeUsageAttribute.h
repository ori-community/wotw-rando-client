#pragma once
#include <Modloader/app/structs/AttributeUsageAttribute.h>
#include <Modloader/app/structs/AttributeUsageAttribute__Array.h>
#include <Modloader/app/structs/AttributeUsageAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttributeUsageAttribute {
        inline app::AttributeUsageAttribute__Class** type_info() {
            static app::AttributeUsageAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AttributeUsageAttribute__Class**)(modloader::win::memory::resolve_rva(0x04771AC0));
            }
            return cache;
        }
        inline app::AttributeUsageAttribute__Class* get_class() {
            return il2cpp::get_class<app::AttributeUsageAttribute__Class>(type_info(), "System", "AttributeUsageAttribute");
        }
        inline app::AttributeUsageAttribute* create() {
            return il2cpp::create_object<app::AttributeUsageAttribute>(get_class());
        }
        inline app::AttributeUsageAttribute__Array* create_array(int size) {
            return il2cpp::array_new<app::AttributeUsageAttribute__Array>(get_class(), size);
        }
        inline app::AttributeUsageAttribute__Array* create_array(const std::vector<app::AttributeUsageAttribute*>& items) {
            return il2cpp::array_new<app::AttributeUsageAttribute__Array>(get_class(), items);
        }
    } // namespace AttributeUsageAttribute
} // namespace app::classes::types
