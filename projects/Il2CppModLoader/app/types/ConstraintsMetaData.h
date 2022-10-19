#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConstraintsMetaData {
        inline app::ConstraintsMetaData__Class** type_info = (app::ConstraintsMetaData__Class**)(modloader::win::memory::resolve_rva(0x04769C48));
        inline app::ConstraintsMetaData__Class* get_class() {
            return il2cpp::get_class<app::ConstraintsMetaData__Class>(type_info, "Moon.Timeline", "ConstraintsMetaData");
        }
        inline app::ConstraintsMetaData* create() {
            return il2cpp::create_object<app::ConstraintsMetaData>(get_class());
        }
        inline app::ConstraintsMetaData__Array* create_array(int size) {
            return il2cpp::array_new<app::ConstraintsMetaData__Array>(get_class(), size);
        }
        inline app::ConstraintsMetaData__Array* create_array(const std::vector<app::ConstraintsMetaData*>& items) {
            return il2cpp::array_new<app::ConstraintsMetaData__Array>(get_class(), items);
        }
    } // namespace ConstraintsMetaData
} // namespace app::classes::types
