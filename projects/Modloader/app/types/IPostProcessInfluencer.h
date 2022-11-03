#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPostProcessInfluencer {
        inline app::IPostProcessInfluencer__Class** type_info = (app::IPostProcessInfluencer__Class**)(modloader::win::memory::resolve_rva(0x0476F710));
        inline app::IPostProcessInfluencer__Class* get_class() {
            return il2cpp::get_class<app::IPostProcessInfluencer__Class>(type_info, "", "IPostProcessInfluencer");
        }
        inline app::IPostProcessInfluencer__Array* create_array(int size) {
            return il2cpp::array_new<app::IPostProcessInfluencer__Array>(get_class(), size);
        }
        inline app::IPostProcessInfluencer__Array* create_array(const std::vector<app::IPostProcessInfluencer*>& items) {
            return il2cpp::array_new<app::IPostProcessInfluencer__Array>(get_class(), items);
        }
    } // namespace IPostProcessInfluencer
} // namespace app::classes::types
