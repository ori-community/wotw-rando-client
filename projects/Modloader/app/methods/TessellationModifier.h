#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TessellationModifier.h>

namespace app::classes::TessellationModifier {
    IL2CPP_REGISTER_METHOD(0x010D9050, void, ApplyMultipliers, (app::TessellationModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x010D90A0, void, SetProperties, (app::TessellationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010D9190, bool, get_IsWorldRotation, (app::TessellationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010D91B0, bool, DoStrip, (app::TessellationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010D91D0, void, Update, (app::TessellationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010D9200, void, UpdateWorldRotation, (app::TessellationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresNormals, (app::TessellationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010D93D0, void, ctor, (app::TessellationModifier * this_ptr))
} // namespace app::classes::TessellationModifier
