#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyBabySandWorm {
        inline app::LegacyBabySandWorm__Class** type_info = (app::LegacyBabySandWorm__Class**)(modloader::win::memory::resolve_rva(0x047941C8));
        inline app::LegacyBabySandWorm__Class* get_class() {
            return il2cpp::get_class<app::LegacyBabySandWorm__Class>(type_info, "", "LegacyBabySandWorm");
        }
        inline app::LegacyBabySandWorm* create() {
            return il2cpp::create_object<app::LegacyBabySandWorm>(get_class());
        }
        inline app::LegacyBabySandWorm__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyBabySandWorm__Array>(get_class(), size);
        }
        inline app::LegacyBabySandWorm__Array* create_array(const std::vector<app::LegacyBabySandWorm*>& items) {
            return il2cpp::array_new<app::LegacyBabySandWorm__Array>(get_class(), items);
        }
    } // namespace LegacyBabySandWorm
} // namespace app::classes::types
