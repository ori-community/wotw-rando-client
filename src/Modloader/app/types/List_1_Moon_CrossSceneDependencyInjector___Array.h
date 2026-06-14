#pragma once
#include <Modloader/app/structs/List_1_Moon_CrossSceneDependencyInjector___Array.h>
#include <Modloader/app/structs/List_1_Moon_CrossSceneDependencyInjector___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace List_1_Moon_CrossSceneDependencyInjector___Array {
        inline app::List_1_Moon_CrossSceneDependencyInjector___Array__Class** type_info() {
            static app::List_1_Moon_CrossSceneDependencyInjector___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::List_1_Moon_CrossSceneDependencyInjector___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::List_1_Moon_CrossSceneDependencyInjector___Array__Class* get_class() {
            return il2cpp::get_class<app::List_1_Moon_CrossSceneDependencyInjector___Array__Class>(type_info(), "System.Collections.Generic", "List`1[Moon.CrossSceneDependencyInjector][]");
        }
        inline app::List_1_Moon_CrossSceneDependencyInjector___Array* create() {
            return il2cpp::create_object<app::List_1_Moon_CrossSceneDependencyInjector___Array>(get_class());
        }
    } // namespace List_1_Moon_CrossSceneDependencyInjector___Array
} // namespace app::classes::types
