#pragma once
#include <Modloader/app/structs/SurrogateForCyclicalReference.h>
#include <Modloader/app/structs/SurrogateForCyclicalReference__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SurrogateForCyclicalReference {
        inline app::SurrogateForCyclicalReference__Class** type_info() {
            static app::SurrogateForCyclicalReference__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SurrogateForCyclicalReference__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SurrogateForCyclicalReference__Class* get_class() {
            return il2cpp::get_class<app::SurrogateForCyclicalReference__Class>(type_info(), "System.Runtime.Serialization", "SurrogateForCyclicalReference");
        }
        inline app::SurrogateForCyclicalReference* create() {
            return il2cpp::create_object<app::SurrogateForCyclicalReference>(get_class());
        }
    } // namespace SurrogateForCyclicalReference
} // namespace app::classes::types
