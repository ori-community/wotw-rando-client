#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletStructure_JobWithMonoBehaviour {
        inline app::VerletStructure_JobWithMonoBehaviour__Class** type_info = (app::VerletStructure_JobWithMonoBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04759748));
        inline app::VerletStructure_JobWithMonoBehaviour__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletStructure_JobWithMonoBehaviour__Class>(type_info, "", "VerletStructure", "JobWithMonoBehaviour");
        }
        inline app::VerletStructure_JobWithMonoBehaviour* create() {
            return il2cpp::create_object<app::VerletStructure_JobWithMonoBehaviour>(get_class());
        }
        inline app::VerletStructure_JobWithMonoBehaviour__Boxed* box(app::VerletStructure_JobWithMonoBehaviour value) {
            return il2cpp::box_value<app::VerletStructure_JobWithMonoBehaviour__Boxed>(get_class(), value);
        }
    } // namespace VerletStructure_JobWithMonoBehaviour
} // namespace app::classes::types
