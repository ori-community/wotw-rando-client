#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPushable {
        inline app::IPushable__Class** type_info = (app::IPushable__Class**)(modloader::win::memory::resolve_rva(0x04755EB8));
        inline app::IPushable__Class* get_class() {
            return il2cpp::get_class<app::IPushable__Class>(type_info, "", "IPushable");
        }
        inline app::IPushable__Array* create_array(int size) {
            return il2cpp::array_new<app::IPushable__Array>(get_class(), size);
        }
        inline app::IPushable__Array* create_array(const std::vector<app::IPushable*>& items) {
            return il2cpp::array_new<app::IPushable__Array>(get_class(), items);
        }
    } // namespace IPushable
} // namespace app::classes::types
