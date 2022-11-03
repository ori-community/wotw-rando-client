#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::VerletStructure_JobWithMonoBehaviour {
    IL2CPP_REGISTER_METHOD(0x00126820, void, ctor, (app::VerletStructure_JobWithMonoBehaviour__Boxed * this_ptr, app::VerletStructure__Array* entities, app::Boolean__Array* should_updates, float dt))
    IL2CPP_REGISTER_METHOD(0x00126840, void, Execute, (app::VerletStructure_JobWithMonoBehaviour__Boxed * this_ptr, int32_t index, app::TransformAccess transform))
} // namespace app::classes::VerletStructure_JobWithMonoBehaviour
