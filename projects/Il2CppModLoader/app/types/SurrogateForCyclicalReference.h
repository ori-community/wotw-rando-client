#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SurrogateForCyclicalReference {
        namespace {
            app::SurrogateForCyclicalReference__Class* type_info_ref = nullptr;
        }
        app::SurrogateForCyclicalReference__Class** type_info = &type_info_ref;
        inline app::SurrogateForCyclicalReference__Class* get_class() {
            return il2cpp::get_class<app::SurrogateForCyclicalReference__Class>(type_info, "System.Runtime.Serialization", "SurrogateForCyclicalReference");
        }
        inline app::SurrogateForCyclicalReference* create() {
            return il2cpp::create_object<app::SurrogateForCyclicalReference>(get_class());
        }
    } // namespace SurrogateForCyclicalReference
} // namespace app::classes::types
