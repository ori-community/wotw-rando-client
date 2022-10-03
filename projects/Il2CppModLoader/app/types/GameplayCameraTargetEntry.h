#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameplayCameraTargetEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameplayCameraTargetEntry__Class** type_info;
        inline app::GameplayCameraTargetEntry__Class* get_class() {
            return il2cpp::get_class<app::GameplayCameraTargetEntry__Class>(type_info, "", "GameplayCameraTargetEntry");
        }
        inline app::GameplayCameraTargetEntry* create() {
            return il2cpp::create_object<app::GameplayCameraTargetEntry>(get_class());
        }
        inline app::GameplayCameraTargetEntry__Boxed* box(app::GameplayCameraTargetEntry value) {
            return il2cpp::box_value<app::GameplayCameraTargetEntry__Boxed>(get_class(), value);
        }
        inline app::GameplayCameraTargetEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::GameplayCameraTargetEntry__Array>(get_class(), size);
        }
    } // namespace GameplayCameraTargetEntry
} // namespace app::classes::types
