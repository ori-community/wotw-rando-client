#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VirtualClipsBuilder_BuilderScope {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VirtualClipsBuilder_BuilderScope__Class** type_info;
        inline app::VirtualClipsBuilder_BuilderScope__Class* get_class() {
            return il2cpp::get_nested_class<app::VirtualClipsBuilder_BuilderScope__Class>(type_info, "", "VirtualClipsBuilder", "BuilderScope");
        }
        inline app::VirtualClipsBuilder_BuilderScope* create() {
            return il2cpp::create_object<app::VirtualClipsBuilder_BuilderScope>(get_class());
        }
        inline app::VirtualClipsBuilder_BuilderScope__Array* create_array(int size) {
            return il2cpp::array_new<app::VirtualClipsBuilder_BuilderScope__Array>(get_class(), size);
        }
    } // namespace VirtualClipsBuilder_BuilderScope
} // namespace app::classes::types
