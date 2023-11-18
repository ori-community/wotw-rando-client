#pragma once
#include <Modloader/app/structs/ShaderID_CrossStitch.h>
#include <Modloader/app/structs/ShaderID_CrossStitch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CrossStitch {
        inline app::ShaderID_CrossStitch__Class** type_info() {
            static app::ShaderID_CrossStitch__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CrossStitch__Class**)(modloader::win::memory::resolve_rva(0x0478D8C0));
            }
            return cache;
        }
        inline app::ShaderID_CrossStitch__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CrossStitch__Class>(type_info(), "Colorful", "ShaderID_CrossStitch");
        }
        inline app::ShaderID_CrossStitch* create() {
            return il2cpp::create_object<app::ShaderID_CrossStitch>(get_class());
        }
    } // namespace ShaderID_CrossStitch
} // namespace app::classes::types
