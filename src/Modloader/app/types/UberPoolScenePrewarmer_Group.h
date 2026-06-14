#pragma once
#include <Modloader/app/structs/UberPoolScenePrewarmer_Group.h>
#include <Modloader/app/structs/UberPoolScenePrewarmer_Group__Array.h>
#include <Modloader/app/structs/UberPoolScenePrewarmer_Group__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolScenePrewarmer_Group {
        inline app::UberPoolScenePrewarmer_Group__Class** type_info() {
            static app::UberPoolScenePrewarmer_Group__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolScenePrewarmer_Group__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolScenePrewarmer_Group__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolScenePrewarmer_Group__Class>(type_info(), "Moon.pooling", "UberPoolScenePrewarmer", "Group");
        }
        inline app::UberPoolScenePrewarmer_Group* create() {
            return il2cpp::create_object<app::UberPoolScenePrewarmer_Group>(get_class());
        }
        inline app::UberPoolScenePrewarmer_Group__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPoolScenePrewarmer_Group__Array>(get_class(), size);
        }
        inline app::UberPoolScenePrewarmer_Group__Array* create_array(const std::vector<app::UberPoolScenePrewarmer_Group*>& items) {
            return il2cpp::array_new<app::UberPoolScenePrewarmer_Group__Array>(get_class(), items);
        }
    } // namespace UberPoolScenePrewarmer_Group
} // namespace app::classes::types
