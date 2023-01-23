#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IKMapping_BoneMap__Array__Class.h>
#include <Modloader/app/structs/IKMapping_BoneMap__Array.h>

namespace app::classes::types {
    namespace IKMapping_BoneMap__Array {
        inline app::IKMapping_BoneMap__Array__Class** type_info = (app::IKMapping_BoneMap__Array__Class**)(modloader::win::memory::resolve_rva(0x0473E360));
        inline app::IKMapping_BoneMap__Array__Class* get_class() {
            return il2cpp::get_class<app::IKMapping_BoneMap__Array__Class>(type_info, "RootMotion.FinalIK", "IKMapping+BoneMap[]");
        }
        inline app::IKMapping_BoneMap__Array* create() {
            return il2cpp::create_object<app::IKMapping_BoneMap__Array>(get_class());
        }
    } // namespace IKMapping_BoneMap__Array
} // namespace app::classes::types
