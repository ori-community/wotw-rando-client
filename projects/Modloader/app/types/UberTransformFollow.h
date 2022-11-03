#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberTransformFollow {
        inline app::UberTransformFollow__Class** type_info = (app::UberTransformFollow__Class**)(modloader::win::memory::resolve_rva(0x0475C4E0));
        inline app::UberTransformFollow__Class* get_class() {
            return il2cpp::get_class<app::UberTransformFollow__Class>(type_info, "Moon", "UberTransformFollow");
        }
        inline app::UberTransformFollow* create() {
            return il2cpp::create_object<app::UberTransformFollow>(get_class());
        }
        inline app::UberTransformFollow__Array* create_array(int size) {
            return il2cpp::array_new<app::UberTransformFollow__Array>(get_class(), size);
        }
        inline app::UberTransformFollow__Array* create_array(const std::vector<app::UberTransformFollow*>& items) {
            return il2cpp::array_new<app::UberTransformFollow__Array>(get_class(), items);
        }
    } // namespace UberTransformFollow
} // namespace app::classes::types
