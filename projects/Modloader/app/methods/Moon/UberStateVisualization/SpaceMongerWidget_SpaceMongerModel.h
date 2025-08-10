#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/SpaceMongerWidget_SpaceMongerModel.h>
#include <Modloader/app/structs/SpaceMongerWidget_SpaceMongerModel__Boxed.h>

namespace app::classes::Moon::UberStateVisualization::SpaceMongerWidget_SpaceMongerModel {
    IL2CPP_REGISTER_METHOD(0x030C21C0, app::SpaceMongerWidget_SpaceMongerModel, get_Default, )
    IL2CPP_REGISTER_METHOD(0x00245090, app::GUIStyle*, get_CenteredLabelStyle, app::SpaceMongerWidget_SpaceMongerModel__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002450A0, void, Clear, app::SpaceMongerWidget_SpaceMongerModel__Boxed* this_ptr)
} // namespace app::classes::Moon::UberStateVisualization::SpaceMongerWidget_SpaceMongerModel
