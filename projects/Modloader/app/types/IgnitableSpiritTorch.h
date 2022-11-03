#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IgnitableSpiritTorch {
        inline app::IgnitableSpiritTorch__Class** type_info = (app::IgnitableSpiritTorch__Class**)(modloader::win::memory::resolve_rva(0x0470B150));
        inline app::IgnitableSpiritTorch__Class* get_class() {
            return il2cpp::get_class<app::IgnitableSpiritTorch__Class>(type_info, "", "IgnitableSpiritTorch");
        }
        inline app::IgnitableSpiritTorch* create() {
            return il2cpp::create_object<app::IgnitableSpiritTorch>(get_class());
        }
        inline app::IgnitableSpiritTorch__Array* create_array(int size) {
            return il2cpp::array_new<app::IgnitableSpiritTorch__Array>(get_class(), size);
        }
        inline app::IgnitableSpiritTorch__Array* create_array(const std::vector<app::IgnitableSpiritTorch*>& items) {
            return il2cpp::array_new<app::IgnitableSpiritTorch__Array>(get_class(), items);
        }
    } // namespace IgnitableSpiritTorch
} // namespace app::classes::types
