#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKEffector__Array {
        inline app::IKEffector__Array__Class** type_info = (app::IKEffector__Array__Class**)(modloader::win::memory::resolve_rva(0x04789020));
        inline app::IKEffector__Array__Class* get_class() {
            return il2cpp::get_class<app::IKEffector__Array__Class>(type_info, "RootMotion.FinalIK", "IKEffector[]");
        }
        inline app::IKEffector__Array* create() {
            return il2cpp::create_object<app::IKEffector__Array>(get_class());
        }
    } // namespace IKEffector__Array
} // namespace app::classes::types
