#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HttpResponseObject.h>

namespace app::classes::PlayFab::SharedModels::HttpResponseObject {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::HttpResponseObject * this_ptr))
}
