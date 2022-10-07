#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrossSceneReferenceId {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CrossSceneReferenceId__Class** type_info;
        inline app::CrossSceneReferenceId__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneReferenceId__Class>(type_info, "Moon", "CrossSceneReferenceId");
        }
        inline app::CrossSceneReferenceId* create() {
            return il2cpp::create_object<app::CrossSceneReferenceId>(get_class());
        }
        inline app::CrossSceneReferenceId__Boxed* box(app::CrossSceneReferenceId value) {
            return il2cpp::box_value<app::CrossSceneReferenceId__Boxed>(get_class(), value);
        }
        inline app::CrossSceneReferenceId__Array* create_array(int size) {
            return il2cpp::array_new<app::CrossSceneReferenceId__Array>(get_class(), size);
        }
        inline app::CrossSceneReferenceId__Array* create_array(const std::vector<app::CrossSceneReferenceId>& items) {
            return il2cpp::array_new<app::CrossSceneReferenceId__Array>(get_class(), items);
        }
    } // namespace CrossSceneReferenceId
} // namespace app::classes::types
