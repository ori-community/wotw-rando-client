#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VirtualClipsBuilder_BuilderScope__Array__Class.h>
#include <Modloader/app/structs/VirtualClipsBuilder_BuilderScope__Array.h>

namespace app::classes::types {
    namespace VirtualClipsBuilder_BuilderScope__Array {
        namespace {
            inline app::VirtualClipsBuilder_BuilderScope__Array__Class* type_info_ref = nullptr;
        }
        inline app::VirtualClipsBuilder_BuilderScope__Array__Class** type_info = &type_info_ref;
        inline app::VirtualClipsBuilder_BuilderScope__Array__Class* get_class() {
            return il2cpp::get_class<app::VirtualClipsBuilder_BuilderScope__Array__Class>(type_info, "", "VirtualClipsBuilder+BuilderScope[]");
        }
        inline app::VirtualClipsBuilder_BuilderScope__Array* create() {
            return il2cpp::create_object<app::VirtualClipsBuilder_BuilderScope__Array>(get_class());
        }
    } // namespace VirtualClipsBuilder_BuilderScope__Array
} // namespace app::classes::types
