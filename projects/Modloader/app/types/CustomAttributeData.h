#pragma once
#include <Modloader/app/structs/CustomAttributeData.h>
#include <Modloader/app/structs/CustomAttributeData__Array.h>
#include <Modloader/app/structs/CustomAttributeData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CustomAttributeData {
        inline app::CustomAttributeData__Class** type_info() {
            static app::CustomAttributeData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CustomAttributeData__Class**)(modloader::win::memory::resolve_rva(0x04791628));
            }
            return cache;
        }
        inline app::CustomAttributeData__Class* get_class() {
            return il2cpp::get_class<app::CustomAttributeData__Class>(type_info(), "System.Reflection", "CustomAttributeData");
        }
        inline app::CustomAttributeData* create() {
            return il2cpp::create_object<app::CustomAttributeData>(get_class());
        }
        inline app::CustomAttributeData__Array* create_array(int size) {
            return il2cpp::array_new<app::CustomAttributeData__Array>(get_class(), size);
        }
        inline app::CustomAttributeData__Array* create_array(const std::vector<app::CustomAttributeData*>& items) {
            return il2cpp::array_new<app::CustomAttributeData__Array>(get_class(), items);
        }
    } // namespace CustomAttributeData
} // namespace app::classes::types
