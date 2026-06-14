#pragma once
#include <Modloader/app/structs/VirtualClipsBuilder_BuilderScope__Array.h>
#include <Modloader/app/structs/VirtualClipsBuilder_BuilderScope__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VirtualClipsBuilder_BuilderScope__Array {
        inline app::VirtualClipsBuilder_BuilderScope__Array__Class** type_info() {
            static app::VirtualClipsBuilder_BuilderScope__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VirtualClipsBuilder_BuilderScope__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VirtualClipsBuilder_BuilderScope__Array__Class* get_class() {
            return il2cpp::get_class<app::VirtualClipsBuilder_BuilderScope__Array__Class>(type_info(), "", "VirtualClipsBuilder+BuilderScope[]");
        }
        inline app::VirtualClipsBuilder_BuilderScope__Array* create() {
            return il2cpp::create_object<app::VirtualClipsBuilder_BuilderScope__Array>(get_class());
        }
    } // namespace VirtualClipsBuilder_BuilderScope__Array
} // namespace app::classes::types
