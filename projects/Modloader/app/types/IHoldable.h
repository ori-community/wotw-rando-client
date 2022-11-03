#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IHoldable {
        inline app::IHoldable__Class** type_info = (app::IHoldable__Class**)(modloader::win::memory::resolve_rva(0x04795670));
        inline app::IHoldable__Class* get_class() {
            return il2cpp::get_class<app::IHoldable__Class>(type_info, "", "IHoldable");
        }
        inline app::IHoldable__Array* create_array(int size) {
            return il2cpp::array_new<app::IHoldable__Array>(get_class(), size);
        }
        inline app::IHoldable__Array* create_array(const std::vector<app::IHoldable*>& items) {
            return il2cpp::array_new<app::IHoldable__Array>(get_class(), items);
        }
    } // namespace IHoldable
} // namespace app::classes::types
