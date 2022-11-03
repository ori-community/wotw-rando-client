#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeWorldMapIcon {
        inline app::RuntimeWorldMapIcon__Class** type_info = (app::RuntimeWorldMapIcon__Class**)(modloader::win::memory::resolve_rva(0x04739DA8));
        inline app::RuntimeWorldMapIcon__Class* get_class() {
            return il2cpp::get_class<app::RuntimeWorldMapIcon__Class>(type_info, "", "RuntimeWorldMapIcon");
        }
        inline app::RuntimeWorldMapIcon* create() {
            return il2cpp::create_object<app::RuntimeWorldMapIcon>(get_class());
        }
        inline app::RuntimeWorldMapIcon__Array* create_array(int size) {
            return il2cpp::array_new<app::RuntimeWorldMapIcon__Array>(get_class(), size);
        }
        inline app::RuntimeWorldMapIcon__Array* create_array(const std::vector<app::RuntimeWorldMapIcon*>& items) {
            return il2cpp::array_new<app::RuntimeWorldMapIcon__Array>(get_class(), items);
        }
    } // namespace RuntimeWorldMapIcon
} // namespace app::classes::types
