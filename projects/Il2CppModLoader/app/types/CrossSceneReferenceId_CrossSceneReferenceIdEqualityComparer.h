#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer {
        inline app::CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer__Class** type_info = (app::CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer__Class**)(modloader::win::memory::resolve_rva(0x04731540));
        inline app::CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer__Class>(type_info, "Moon", "CrossSceneReferenceId", "CrossSceneReferenceIdEqualityComparer");
        }
        inline app::CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer* create() {
            return il2cpp::create_object<app::CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer>(get_class());
        }
    } // namespace CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer
} // namespace app::classes::types
