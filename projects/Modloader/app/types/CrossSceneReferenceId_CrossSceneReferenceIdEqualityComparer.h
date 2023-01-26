#pragma once
#include <Modloader/app/structs/CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer.h>
#include <Modloader/app/structs/CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer {
        inline app::CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer__Class** type_info() {
            static app::CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer__Class**)(modloader::win::memory::resolve_rva(0x04731540));
            }
            return cache;
        }
        inline app::CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer__Class>(type_info(), "Moon", "CrossSceneReferenceId", "CrossSceneReferenceIdEqualityComparer");
        }
        inline app::CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer* create() {
            return il2cpp::create_object<app::CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer>(get_class());
        }
    } // namespace CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer
} // namespace app::classes::types
