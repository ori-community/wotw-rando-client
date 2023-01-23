#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Contraction__Class.h>
#include <Modloader/app/structs/Contraction.h>
#include <Modloader/app/structs/Contraction__Array.h>

namespace app::classes::types {
    namespace Contraction {
        inline app::Contraction__Class** type_info = (app::Contraction__Class**)(modloader::win::memory::resolve_rva(0x0476F3E8));
        inline app::Contraction__Class* get_class() {
            return il2cpp::get_class<app::Contraction__Class>(type_info, "Mono.Globalization.Unicode", "Contraction");
        }
        inline app::Contraction* create() {
            return il2cpp::create_object<app::Contraction>(get_class());
        }
        inline app::Contraction__Array* create_array(int size) {
            return il2cpp::array_new<app::Contraction__Array>(get_class(), size);
        }
        inline app::Contraction__Array* create_array(const std::vector<app::Contraction*>& items) {
            return il2cpp::array_new<app::Contraction__Array>(get_class(), items);
        }
    } // namespace Contraction
} // namespace app::classes::types
