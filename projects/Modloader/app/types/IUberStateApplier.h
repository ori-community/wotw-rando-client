#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IUberStateApplier {
        inline app::IUberStateApplier__Class** type_info = (app::IUberStateApplier__Class**)(modloader::win::memory::resolve_rva(0x0472BB18));
        inline app::IUberStateApplier__Class* get_class() {
            return il2cpp::get_class<app::IUberStateApplier__Class>(type_info, "Moon", "IUberStateApplier");
        }
        inline app::IUberStateApplier__Array* create_array(int size) {
            return il2cpp::array_new<app::IUberStateApplier__Array>(get_class(), size);
        }
        inline app::IUberStateApplier__Array* create_array(const std::vector<app::IUberStateApplier*>& items) {
            return il2cpp::array_new<app::IUberStateApplier__Array>(get_class(), items);
        }
    } // namespace IUberStateApplier
} // namespace app::classes::types
