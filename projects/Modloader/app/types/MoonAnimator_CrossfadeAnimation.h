#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimator_CrossfadeAnimation {
        inline app::MoonAnimator_CrossfadeAnimation__Class** type_info = (app::MoonAnimator_CrossfadeAnimation__Class**)(modloader::win::memory::resolve_rva(0x04722780));
        inline app::MoonAnimator_CrossfadeAnimation__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_CrossfadeAnimation__Class>(type_info, "Moon", "MoonAnimator", "CrossfadeAnimation");
        }
        inline app::MoonAnimator_CrossfadeAnimation* create() {
            return il2cpp::create_object<app::MoonAnimator_CrossfadeAnimation>(get_class());
        }
    } // namespace MoonAnimator_CrossfadeAnimation
} // namespace app::classes::types
