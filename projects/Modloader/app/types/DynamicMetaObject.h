#pragma once
#include <Modloader/app/structs/DynamicMetaObject.h>
#include <Modloader/app/structs/DynamicMetaObject__Array.h>
#include <Modloader/app/structs/DynamicMetaObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicMetaObject {
        inline app::DynamicMetaObject__Class** type_info() {
            static app::DynamicMetaObject__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicMetaObject__Class**)(modloader::win::memory::resolve_rva(0x04760D10));
            }
            return cache;
        }
        inline app::DynamicMetaObject__Class* get_class() {
            return il2cpp::get_class<app::DynamicMetaObject__Class>(type_info(), "System.Dynamic", "DynamicMetaObject");
        }
        inline app::DynamicMetaObject* create() {
            return il2cpp::create_object<app::DynamicMetaObject>(get_class());
        }
        inline app::DynamicMetaObject__Array* create_array(int size) {
            return il2cpp::array_new<app::DynamicMetaObject__Array>(get_class(), size);
        }
        inline app::DynamicMetaObject__Array* create_array(const std::vector<app::DynamicMetaObject*>& items) {
            return il2cpp::array_new<app::DynamicMetaObject__Array>(get_class(), items);
        }
    } // namespace DynamicMetaObject
} // namespace app::classes::types
