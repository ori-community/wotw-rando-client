#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_CrossfadeAnimation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonAnimator_CrossfadeAnimation__Class** type_info;
        inline app::MoonAnimator_CrossfadeAnimation__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_CrossfadeAnimation__Class>(type_info, "Moon", "MoonAnimator", "CrossfadeAnimation");
        }
        inline app::MoonAnimator_CrossfadeAnimation* create() {
            return il2cpp::create_object<app::MoonAnimator_CrossfadeAnimation>(get_class());
        }
    } // namespace MoonAnimator_CrossfadeAnimation
} // namespace app::classes::types
