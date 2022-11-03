#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CrossStitch {
        inline app::ShaderID_CrossStitch__Class** type_info = (app::ShaderID_CrossStitch__Class**)(modloader::win::memory::resolve_rva(0x0478D8C0));
        inline app::ShaderID_CrossStitch__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CrossStitch__Class>(type_info, "Colorful", "ShaderID_CrossStitch");
        }
        inline app::ShaderID_CrossStitch* create() {
            return il2cpp::create_object<app::ShaderID_CrossStitch>(get_class());
        }
    } // namespace ShaderID_CrossStitch
} // namespace app::classes::types
