#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiritSentry__Class.h>
#include <Modloader/app/structs/SpiritSentry.h>
#include <Modloader/app/structs/SpiritSentry__Array.h>

namespace app::classes::types {
    namespace SpiritSentry {
        inline app::SpiritSentry__Class** type_info = (app::SpiritSentry__Class**)(modloader::win::memory::resolve_rva(0x047927E0));
        inline app::SpiritSentry__Class* get_class() {
            return il2cpp::get_class<app::SpiritSentry__Class>(type_info, "", "SpiritSentry");
        }
        inline app::SpiritSentry* create() {
            return il2cpp::create_object<app::SpiritSentry>(get_class());
        }
        inline app::SpiritSentry__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritSentry__Array>(get_class(), size);
        }
        inline app::SpiritSentry__Array* create_array(const std::vector<app::SpiritSentry*>& items) {
            return il2cpp::array_new<app::SpiritSentry__Array>(get_class(), items);
        }
    } // namespace SpiritSentry
} // namespace app::classes::types
