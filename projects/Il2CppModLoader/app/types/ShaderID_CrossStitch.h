#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CrossStitch {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CrossStitch__Class** type_info;
        inline app::ShaderID_CrossStitch__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CrossStitch__Class>(type_info, "Colorful", "ShaderID_CrossStitch");
        }
        inline app::ShaderID_CrossStitch* create() {
            return il2cpp::create_object<app::ShaderID_CrossStitch>(get_class());
        }
    } // namespace ShaderID_CrossStitch
} // namespace app::classes::types
