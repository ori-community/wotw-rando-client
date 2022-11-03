#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletPhysicsAnimationPostprocess_Job {
        inline app::VerletPhysicsAnimationPostprocess_Job__Class** type_info = (app::VerletPhysicsAnimationPostprocess_Job__Class**)(modloader::win::memory::resolve_rva(0x0477B690));
        inline app::VerletPhysicsAnimationPostprocess_Job__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletPhysicsAnimationPostprocess_Job__Class>(type_info, "Moon", "VerletPhysicsAnimationPostprocess", "Job");
        }
        inline app::VerletPhysicsAnimationPostprocess_Job* create() {
            return il2cpp::create_object<app::VerletPhysicsAnimationPostprocess_Job>(get_class());
        }
        inline app::VerletPhysicsAnimationPostprocess_Job__Boxed* box(app::VerletPhysicsAnimationPostprocess_Job value) {
            return il2cpp::box_value<app::VerletPhysicsAnimationPostprocess_Job__Boxed>(get_class(), value);
        }
    } // namespace VerletPhysicsAnimationPostprocess_Job
} // namespace app::classes::types
