#pragma once
#include <Modloader/app/structs/ISceneComponentTracker.h>
#include <Modloader/app/structs/ISceneComponentTracker__Array.h>
#include <Modloader/app/structs/ISceneComponentTracker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISceneComponentTracker {
        inline app::ISceneComponentTracker__Class** type_info() {
            static app::ISceneComponentTracker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISceneComponentTracker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISceneComponentTracker__Class* get_class() {
            return il2cpp::get_class<app::ISceneComponentTracker__Class>(type_info(), "", "ISceneComponentTracker");
        }
        inline app::ISceneComponentTracker__Array* create_array(int size) {
            return il2cpp::array_new<app::ISceneComponentTracker__Array>(get_class(), size);
        }
        inline app::ISceneComponentTracker__Array* create_array(const std::vector<app::ISceneComponentTracker*>& items) {
            return il2cpp::array_new<app::ISceneComponentTracker__Array>(get_class(), items);
        }
    } // namespace ISceneComponentTracker
} // namespace app::classes::types
