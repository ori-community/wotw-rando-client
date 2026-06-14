#pragma once
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SceneRoot__Array.h>
#include <Modloader/app/structs/SceneRoot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneRoot {
        inline app::SceneRoot__Class** type_info() {
            static app::SceneRoot__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneRoot__Class**)(modloader::win::memory::resolve_rva(0x04799D28));
            }
            return cache;
        }
        inline app::SceneRoot__Class* get_class() {
            return il2cpp::get_class<app::SceneRoot__Class>(type_info(), "", "SceneRoot");
        }
        inline app::SceneRoot* create() {
            return il2cpp::create_object<app::SceneRoot>(get_class());
        }
        inline app::SceneRoot__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneRoot__Array>(get_class(), size);
        }
        inline app::SceneRoot__Array* create_array(const std::vector<app::SceneRoot*>& items) {
            return il2cpp::array_new<app::SceneRoot__Array>(get_class(), items);
        }
    } // namespace SceneRoot
} // namespace app::classes::types
