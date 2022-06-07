#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ServerTimelineSequence {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerTimelineSequence * this_ptr, app::Object * original_component))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object *, CreateData, (app::ServerTimelineSequence * this_ptr, app::Object * data))
    IL2CPP_REGISTER_METHOD(0x005A0F00, app::Component_1 *, ApplyData, (app::ServerTimelineSequence * this_ptr, app::GameObject * * gameobj))
    IL2CPP_REGISTER_METHOD(0x005A0F90, void, RebuildReferences, (app::ServerTimelineSequence * this_ptr))
}
