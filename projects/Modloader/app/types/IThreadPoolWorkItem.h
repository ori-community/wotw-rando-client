#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IThreadPoolWorkItem {
        inline app::IThreadPoolWorkItem__Class** type_info = (app::IThreadPoolWorkItem__Class**)(modloader::win::memory::resolve_rva(0x04788B28));
        inline app::IThreadPoolWorkItem__Class* get_class() {
            return il2cpp::get_class<app::IThreadPoolWorkItem__Class>(type_info, "System.Threading", "IThreadPoolWorkItem");
        }
        inline app::IThreadPoolWorkItem__Array* create_array(int size) {
            return il2cpp::array_new<app::IThreadPoolWorkItem__Array>(get_class(), size);
        }
        inline app::IThreadPoolWorkItem__Array* create_array(const std::vector<app::IThreadPoolWorkItem*>& items) {
            return il2cpp::array_new<app::IThreadPoolWorkItem__Array>(get_class(), items);
        }
    } // namespace IThreadPoolWorkItem
} // namespace app::classes::types
