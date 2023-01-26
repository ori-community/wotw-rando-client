#pragma once
#include <Modloader/app/structs/GraphicsJobsSyncPoint__Enum.h>
#include <Modloader/app/structs/GraphicsJobsSyncPoint__Enum__Array.h>
#include <Modloader/app/structs/GraphicsJobsSyncPoint__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GraphicsJobsSyncPoint__Enum {
        inline app::GraphicsJobsSyncPoint__Enum__Class** type_info() {
            static app::GraphicsJobsSyncPoint__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GraphicsJobsSyncPoint__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GraphicsJobsSyncPoint__Enum__Class* get_class() {
            return il2cpp::get_class<app::GraphicsJobsSyncPoint__Enum__Class>(type_info(), "UnityEngine.Experimental.Rendering", "GraphicsJobsSyncPoint");
        }
        inline app::GraphicsJobsSyncPoint__Enum* create() {
            return il2cpp::create_object<app::GraphicsJobsSyncPoint__Enum>(get_class());
        }
        inline app::GraphicsJobsSyncPoint__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::GraphicsJobsSyncPoint__Enum__Array>(get_class(), size);
        }
        inline app::GraphicsJobsSyncPoint__Enum__Array* create_array(const std::vector<app::GraphicsJobsSyncPoint__Enum*>& items) {
            return il2cpp::array_new<app::GraphicsJobsSyncPoint__Enum__Array>(get_class(), items);
        }
    } // namespace GraphicsJobsSyncPoint__Enum
} // namespace app::classes::types
