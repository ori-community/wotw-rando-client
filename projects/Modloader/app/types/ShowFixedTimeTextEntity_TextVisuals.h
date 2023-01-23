#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShowFixedTimeTextEntity_TextVisuals__Class.h>
#include <Modloader/app/structs/ShowFixedTimeTextEntity_TextVisuals.h>
#include <Modloader/app/structs/ShowFixedTimeTextEntity_TextVisuals__Array.h>

namespace app::classes::types {
    namespace ShowFixedTimeTextEntity_TextVisuals {
        inline app::ShowFixedTimeTextEntity_TextVisuals__Class** type_info = (app::ShowFixedTimeTextEntity_TextVisuals__Class**)(modloader::win::memory::resolve_rva(0x04786FF8));
        inline app::ShowFixedTimeTextEntity_TextVisuals__Class* get_class() {
            return il2cpp::get_nested_class<app::ShowFixedTimeTextEntity_TextVisuals__Class>(type_info, "Moon.Timeline", "ShowFixedTimeTextEntity", "TextVisuals");
        }
        inline app::ShowFixedTimeTextEntity_TextVisuals* create() {
            return il2cpp::create_object<app::ShowFixedTimeTextEntity_TextVisuals>(get_class());
        }
        inline app::ShowFixedTimeTextEntity_TextVisuals__Array* create_array(int size) {
            return il2cpp::array_new<app::ShowFixedTimeTextEntity_TextVisuals__Array>(get_class(), size);
        }
        inline app::ShowFixedTimeTextEntity_TextVisuals__Array* create_array(const std::vector<app::ShowFixedTimeTextEntity_TextVisuals*>& items) {
            return il2cpp::array_new<app::ShowFixedTimeTextEntity_TextVisuals__Array>(get_class(), items);
        }
    } // namespace ShowFixedTimeTextEntity_TextVisuals
} // namespace app::classes::types
