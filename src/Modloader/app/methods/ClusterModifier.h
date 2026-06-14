#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClusterModifier.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ClusterModifier {
    IL2CPP_REGISTER_METHOD(0x012C5DE0, app::String*, get_BoneName, app::ClusterModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ControlMask, app::ClusterModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C5E60, void, OnEnable, app::ClusterModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C5FC0, void, Update, app::ClusterModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C61A0, void, LateUpdate, app::ClusterModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C6220, void, RebindClusterTransform, app::ClusterModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C6A70, void, SetProperties, app::ClusterModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C6B70, void, CalibrateHandle, app::ClusterModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresVertexColor, app::ClusterModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, DoStrip, app::ClusterModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C6ED0, void, ctor, app::ClusterModifier* this_ptr)
} // namespace app::classes::ClusterModifier
