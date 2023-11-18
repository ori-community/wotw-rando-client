#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StressTester_SceneIdentifier.h>
#include <Modloader/app/structs/SceneMetaData.h>

namespace app::classes::StressTester_SceneIdentifier {
    IL2CPP_REGISTER_METHOD(0x0066E910, void, ctor, (app::StressTester_SceneIdentifier * this_ptr, app::SceneMetaData* meta))
}
