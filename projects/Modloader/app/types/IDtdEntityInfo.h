#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IDtdEntityInfo__Class.h>
#include <Modloader/app/structs/IDtdEntityInfo__Array.h>
#include <Modloader/app/structs/IDtdEntityInfo.h>

namespace app::classes::types {
    namespace IDtdEntityInfo {
        inline app::IDtdEntityInfo__Class** type_info = (app::IDtdEntityInfo__Class**)(modloader::win::memory::resolve_rva(0x0470E098));
        inline app::IDtdEntityInfo__Class* get_class() {
            return il2cpp::get_class<app::IDtdEntityInfo__Class>(type_info, "System.Xml", "IDtdEntityInfo");
        }
        inline app::IDtdEntityInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::IDtdEntityInfo__Array>(get_class(), size);
        }
        inline app::IDtdEntityInfo__Array* create_array(const std::vector<app::IDtdEntityInfo*>& items) {
            return il2cpp::array_new<app::IDtdEntityInfo__Array>(get_class(), items);
        }
    } // namespace IDtdEntityInfo
} // namespace app::classes::types
