#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShaderPassName__Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::Experimental::Rendering::ShaderPassName {
    IL2CPP_REGISTER_METHOD(0x001F2140, void, ctor, (app::ShaderPassName__Boxed * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x02525150, int32_t, Init, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x001EBC90, int32_t, get_nameIndex, (app::ShaderPassName__Boxed * this_ptr))
} // namespace app::classes::UnityEngine::Experimental::Rendering::ShaderPassName
