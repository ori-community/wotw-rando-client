#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ContextSet {
    IL2CPP_REGISTER_METHOD(0x02552AD0, void, ctor, (app::ContextSet * this_ptr, app::IContext__Array* context))
    IL2CPP_REGISTER_METHOD(0x02552C30, void, Add, (app::ContextSet * this_ptr, app::IContext__Array* context))
    IL2CPP_REGISTER_METHOD(0x015E8190, app::Object*, GetFirstOfType_1, (app::ContextSet * this_ptr, bool* found))
    IL2CPP_REGISTER_METHOD(0x01548030, void, GetAllOfType, (app::ContextSet * this_ptr, app::List_1_System_Object_* container))
    IL2CPP_REGISTER_METHOD(0x015E7CD0, app::AnimationLayerContext, GetFirstOfType_2, (app::ContextSet * this_ptr, bool* found))
    IL2CPP_REGISTER_METHOD(0x015E7E70, app::AnimationContext, GetFirstOfType_3, (app::ContextSet * this_ptr, bool* found))
    IL2CPP_REGISTER_METHOD(0x015E7FF0, app::RecordingContext, GetFirstOfType_4, (app::ContextSet * this_ptr, bool* found))
} // namespace app::classes::ContextSet
