#pragma once
#include <Modloader/app/structs/IDtdDefaultAttributeInfo.h>
#include <Modloader/app/structs/IDtdDefaultAttributeInfo__Array.h>
#include <Modloader/app/structs/IDtdDefaultAttributeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDtdDefaultAttributeInfo {
        inline app::IDtdDefaultAttributeInfo__Class** type_info() {
            static app::IDtdDefaultAttributeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDtdDefaultAttributeInfo__Class**)(modloader::win::memory::resolve_rva(0x0478A048));
            }
            return cache;
        }
        inline app::IDtdDefaultAttributeInfo__Class* get_class() {
            return il2cpp::get_class<app::IDtdDefaultAttributeInfo__Class>(type_info(), "System.Xml", "IDtdDefaultAttributeInfo");
        }
        inline app::IDtdDefaultAttributeInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::IDtdDefaultAttributeInfo__Array>(get_class(), size);
        }
        inline app::IDtdDefaultAttributeInfo__Array* create_array(const std::vector<app::IDtdDefaultAttributeInfo*>& items) {
            return il2cpp::array_new<app::IDtdDefaultAttributeInfo__Array>(get_class(), items);
        }
    } // namespace IDtdDefaultAttributeInfo
} // namespace app::classes::types
