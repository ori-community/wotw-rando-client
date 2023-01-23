#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Data__Class.h>
#include <Modloader/app/structs/Data.h>
#include <Modloader/app/structs/Data__Array.h>

namespace app::classes::types {
    namespace Data {
        inline app::Data__Class** type_info = (app::Data__Class**)(modloader::win::memory::resolve_rva(0x0470E080));
        inline app::Data__Class* get_class() {
            return il2cpp::get_class<app::Data__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Data");
        }
        inline app::Data* create() {
            return il2cpp::create_object<app::Data>(get_class());
        }
        inline app::Data__Array* create_array(int size) {
            return il2cpp::array_new<app::Data__Array>(get_class(), size);
        }
        inline app::Data__Array* create_array(const std::vector<app::Data*>& items) {
            return il2cpp::array_new<app::Data__Array>(get_class(), items);
        }
    } // namespace Data
} // namespace app::classes::types
